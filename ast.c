
#include "ast.h"

Nodo* crear_nodo(TipoNodo tipo) {
    Nodo* n = (Nodo*)malloc(sizeof(Nodo));
    n->tipo = tipo;
    n->valor_entero = 0;
    n->valor_decimal = 0;
    n->valor_cadena = NULL;
    n->izq = NULL;
    n->der = NULL;
    n->extra = NULL;
    n->siguiente = NULL;
    return n;
}

Nodo* nodo_entero(int val) {
    Nodo* n = crear_nodo(NODO_NUM_ENTERO);
    n->valor_entero = val;
    return n;
}

Nodo* nodo_cadena(char* val) {
    Nodo* n = crear_nodo(NODO_CADENA);
    n->valor_cadena = strdup(val);
    return n;
}

Nodo* nodo_id(char* nombre) {
    Nodo* n = crear_nodo(NODO_ID);
    n->valor_cadena = strdup(nombre);
    return n;
}

Nodo* nodo_op(TipoNodo tipo, Nodo* izq, Nodo* der) {
    Nodo* n = crear_nodo(tipo);
    n->izq = izq;
    n->der = der;
    return n;
}

Nodo* agregar_sentencia(Nodo* lista, Nodo* nueva) {
    if (!lista) return nueva;
    Nodo* actual = lista;
    while (actual->siguiente) actual = actual->siguiente;
    actual->siguiente = nueva;
    return lista;
}
