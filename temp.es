Programa prueba(){
    entero a;
    entero b;
    entero resultado;
    a=Ingresar("Ingrese el primer numero");
    b=Ingresar("Ingrese el segundo numero");
    resultado=a+b;
    Imprimir("La suma es: ". resultado);
    si (a>b){
        Imprimir("El mayor es: ". a);
    }delocontrario{
        Imprimir("El mayor es: ". b);
    }
}
