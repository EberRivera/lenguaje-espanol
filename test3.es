entero mayor(entero a, entero b, entero c){
    Imprimir("a= ". a);
    Imprimir("b= ". b);
    Imprimir("c= ". c);
    si (a>b y a>c){
        retornar(a);
    }
    retornar(b);
}

Programa prueba(){
    entero r;
    r=mayor(10, 5, 3);
    Imprimir("mayor: ". r);
}
