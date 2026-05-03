entero suma(entero a, entero b){
    retornar(a+b);
}

menu(entero a, entero b){
    si (a>b){
        Imprimir("el numero ". a ."es mayor");
    }delocontrario{
        Imprimir("el numero ". b ."es mayor");
    }
}

Programa prueba4(){
    entero resultado;
    entero x;
    entero y;
    x=Ingresar("ingrese x");
    y=Ingresar("ingrese y");
    resultado=suma(x, y);
    Imprimir("El resultado es ". resultado);
    menu(x, y);
}
