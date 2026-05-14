entero suma(entero a, entero b){
    retornar(a+b);
}

entero mayor(entero a, entero b, entero c){
    si (a>b y a>c){
        retornar(a);
    }
    si (b>a y b>c){
        retornar(b);
    }
    retornar(c);
}

Programa funciones(){
    entero r;
    r=suma(10, 20);
    Imprimir("10 + 20 = ". r);
    r=mayor(5, 12, 8);
    Imprimir("El mayor de 5, 12, 8 es: ". r);
}