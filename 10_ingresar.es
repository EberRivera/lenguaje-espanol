Programa entrada(){
    entero a;
    entero b;
    entero r;
    a=Ingresar("Ingrese primer numero");
    b=Ingresar("Ingrese segundo numero");
    r=a+b;
    Imprimir("La suma es: ". r);
    si (a>b){
        Imprimir("El mayor es: ". a);
    }delocontrario{
        Imprimir("El mayor es: ". b);
    }
}