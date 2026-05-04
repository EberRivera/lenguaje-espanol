Programa demoCompleta(){
    entero a;
    entero b;
    entero resultado;
    entero i;
    entero negativo;
    negativo=-10;
    Imprimir("=== Bienvenido al Compilador en Espanol ===");
    a=Ingresar("Ingrese el primer numero");
    b=Ingresar("Ingrese el segundo numero");
    Imprimir("--- Operaciones Aritmeticas ---");
    resultado=a+b;
    Imprimir("Suma: ". resultado);
    resultado=a-b;
    Imprimir("Resta: ". resultado);
    resultado=a*b;
    Imprimir("Multiplicacion: ". resultado);
    resultado=a/b;
    Imprimir("Division: ". resultado);
    Imprimir("--- Comparacion ---");
    si (a>b){
        Imprimir("El mayor es: ". a);
    }delocontrario{
        Imprimir("El mayor es: ". b);
    }
    Imprimir("--- Ciclo Mientras ---");
    i=0;
    mientras (i<3){
        Imprimir("Iteracion: ". i);
        i=i+1;
    }
    Imprimir("--- Numero Negativo ---");
    Imprimir("Valor negativo: ". negativo);
    Imprimir("=== Fin del programa ===");
}
