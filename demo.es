Programa demo(){
    entero a;
    entero b;
    entero resultado;
    entero i;
    a=Ingresar("Ingrese primer numero");
    b=Ingresar("Ingrese segundo numero");
    resultado=a+b;
    Imprimir("Suma: ". resultado);
    resultado=a-b;
    Imprimir("Resta: ". resultado);
    resultado=a*b;
    Imprimir("Multiplicacion: ". resultado);
    resultado=a/b;
    Imprimir("Division: ". resultado);
    si (a>b){
        Imprimir("El mayor es: ". a);
    }delocontrario{
        Imprimir("El mayor es: ". b);
    }
    i=0;
    mientras (i<3){
        Imprimir("Iteracion: ". i);
        i=i+1;
    }
}
