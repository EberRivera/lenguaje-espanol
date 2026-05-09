
#include "codegen.h"
#include "funciones.h"

void imprimir_indent(FILE* f, int indent) {
    for (int i = 0; i < indent; i++) fprintf(f, "    ");
}

void gen_expresion(Nodo* n, FILE* f) {
    if (!n) { fprintf(f, "0"); return; }
    switch(n->tipo) {
        case NODO_NUM_ENTERO:  fprintf(f, "%d", n->valor_entero); break;
        case NODO_NUM_DECIMAL: fprintf(f, "%.2f", n->valor_decimal); break;
        case NODO_ID:          fprintf(f, "%s", n->valor_cadena); break;
        case NODO_NEGATIVO:    fprintf(f, "-("); gen_expresion(n->izq, f); fprintf(f, ")"); break;
        case NODO_SUMA:        fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " + "); gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_RESTA:       fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " - "); gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_MULT:        fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " * "); gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_DIV:         fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " / "); gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_MAYOR:       fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " > ");  gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_MENOR:       fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " < ");  gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_MAYORIGUAL:  fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " >= "); gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_MENORIGUAL:  fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " <= "); gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_IGUAL:       fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " == "); gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_DIFERENTE:   fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " != "); gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_AND:         fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " && "); gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_OR:          fprintf(f, "("); gen_expresion(n->izq, f); fprintf(f, " || "); gen_expresion(n->der, f); fprintf(f, ")"); break;
        case NODO_NOT:         fprintf(f, "!("); gen_expresion(n->izq, f); fprintf(f, ")"); break;
        case NODO_ARREGLO_ACCESO:
            fprintf(f, "%s[", n->valor_cadena);
            gen_expresion(n->izq, f);
            fprintf(f, "]");
            break;
        case NODO_LLAMADA: {
            fprintf(f, "%s(", n->valor_cadena);
            Nodo* arg = n->izq;
            int first = 1;
            while (arg) {
                if (!first) fprintf(f, ", ");
                gen_expresion(arg, f);
                arg = arg->siguiente;
                first = 0;
            }
            fprintf(f, ")");
            break;
        }
        case NODO_CADENA: {
            char* s = n->valor_cadena;
            if (s[0] == '"') s++;
            char buf[200];
            strncpy(buf, s, sizeof(buf));
            int len = strlen(buf);
            if (len > 0 && buf[len-1] == '"') buf[len-1] = '\0';
            fprintf(f, "\"%s\"", buf);
            break;
        }
        default: fprintf(f, "0"); break;
    }
}

void gen_imprimir_nodo(Nodo* n, FILE* f, int indent) {
    if (!n) return;
    if (n->tipo == NODO_CONCAT) {
        gen_imprimir_nodo(n->izq, f, indent);
        gen_imprimir_nodo(n->der, f, indent);
        return;
    }
    imprimir_indent(f, indent);
    if (n->tipo == NODO_CADENA) {
        char* s = n->valor_cadena;
        if (s[0] == '"') s++;
        char buf[200];
        strncpy(buf, s, sizeof(buf));
        int len = strlen(buf);
        if (len > 0 && buf[len-1] == '"') buf[len-1] = '\0';
        fprintf(f, "printf(\"%%s\", \"%s\");\n", buf);
    } else {
        fprintf(f, "printf(\"%%d\", (int)(");
        gen_expresion(n, f);
        fprintf(f, "));\n");
    }
}

void gen_lista(Nodo* n, FILE* f, int indent);

void gen_nodo(Nodo* n, FILE* f, int indent) {
    if (!n) return;
    switch(n->tipo) {
        case NODO_DECLARACION: {
            imprimir_indent(f, indent);
            fprintf(f, "int %s = 0;\n", n->valor_cadena);
            break;
        }
        case NODO_ARREGLO_DECL: {
            imprimir_indent(f, indent);
            fprintf(f, "int %s[", n->valor_cadena);
            gen_expresion(n->izq, f);
            fprintf(f, "];\n");
            break;
        }
        case NODO_ASIGNACION: {
            imprimir_indent(f, indent);
            if (n->der && n->der->tipo == NODO_INGRESAR) {
                char msg[200] = "";
                if (n->der->izq && n->der->izq->tipo == NODO_CADENA) {
                    char* s = n->der->izq->valor_cadena;
                    if (s[0] == '"') s++;
                    strncpy(msg, s, sizeof(msg));
                    int len = strlen(msg);
                    if (len > 0 && msg[len-1] == '"') msg[len-1] = '\0';
                }
                fprintf(f, "printf(\"%s: \"); scanf(\"%%d\", &%s);\n", msg, n->valor_cadena);
            } else {
                fprintf(f, "%s = ", n->valor_cadena);
                gen_expresion(n->der, f);
                fprintf(f, ";\n");
            }
            break;
        }
        case NODO_ARREGLO_ASIGN: {
            imprimir_indent(f, indent);
            fprintf(f, "%s[", n->valor_cadena);
            gen_expresion(n->izq, f);
            fprintf(f, "] = ");
            gen_expresion(n->der, f);
            fprintf(f, ";\n");
            break;
        }
        case NODO_IMPRIMIR: {
            gen_imprimir_nodo(n->izq, f, indent);
            imprimir_indent(f, indent);
            fprintf(f, "printf(\"\\n\");\n");
            break;
        }
        case NODO_SI: {
            imprimir_indent(f, indent);
            fprintf(f, "if (");
            gen_expresion(n->izq, f);
            fprintf(f, ") {\n");
            gen_lista(n->der, f, indent+1);
            imprimir_indent(f, indent);
            fprintf(f, "}");
            if (n->extra) {
                fprintf(f, " else {\n");
                gen_lista(n->extra, f, indent+1);
                imprimir_indent(f, indent);
                fprintf(f, "}");
            }
            fprintf(f, "\n");
            break;
        }
        case NODO_MIENTRAS: {
            imprimir_indent(f, indent);
            fprintf(f, "while (");
            gen_expresion(n->izq, f);
            fprintf(f, ") {\n");
            gen_lista(n->der, f, indent+1);
            imprimir_indent(f, indent);
            fprintf(f, "}\n");
            break;
        }
        case NODO_HACER: {
            imprimir_indent(f, indent);
            fprintf(f, "do {\n");
            gen_lista(n->izq, f, indent+1);
            imprimir_indent(f, indent);
            fprintf(f, "} while (");
            gen_expresion(n->der, f);
            fprintf(f, ");\n");
            break;
        }
        case NODO_RETORNAR: {
            imprimir_indent(f, indent);
            fprintf(f, "return ");
            gen_expresion(n->izq, f);
            fprintf(f, ";\n");
            break;
        }
        case NODO_LLAMADA: {
            imprimir_indent(f, indent);
            gen_expresion(n, f);
            fprintf(f, ";\n");
            break;
        }
        default: break;
    }
}

void gen_lista(Nodo* n, FILE* f, int indent) {
    while (n) {
        gen_nodo(n, f, indent);
        n = n->siguiente;
    }
}

void generar_codigo(Nodo* ast, const char* archivo_salida) {
    FILE* f = fopen(archivo_salida, "w");
    if (!f) { printf("Error: no se pudo crear %s\n", archivo_salida); return; }

    fprintf(f, "#include <stdio.h>\n#include <stdlib.h>\n\n");

    for (int i = 0; i < num_funciones; i++) {
        Funcion* fn = &tabla_funciones[i];
        fprintf(f, "int %s(", fn->nombre);
        for (int j = 0; j < fn->num_params; j++) {
            if (j > 0) fprintf(f, ", ");
            fprintf(f, "int %s", fn->params[j]);
        }
        fprintf(f, ");\n");
    }
    fprintf(f, "\n");

    for (int i = 0; i < num_funciones; i++) {
        Funcion* fn = &tabla_funciones[i];
        fprintf(f, "int %s(", fn->nombre);
        for (int j = 0; j < fn->num_params; j++) {
            if (j > 0) fprintf(f, ", ");
            fprintf(f, "int %s", fn->params[j]);
        }
        fprintf(f, ") {\n");
        gen_lista(fn->cuerpo, f, 1);
        fprintf(f, "    return 0;\n}\n\n");
    }

    fprintf(f, "int main() {\n");
    if (ast && ast->tipo == NODO_PROGRAMA)
        gen_lista(ast->izq, f, 1);
    fprintf(f, "    return 0;\n}\n");

    fclose(f);
    printf("\033[1;32mCodigo C generado: %s\033[0m\n", archivo_salida);
}
