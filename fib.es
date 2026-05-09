entero fibonacci(entero n){
    entero a;
    entero b;
    entero n1;
    entero n2;
    si (n<=1){
        retornar(n);
    }
    n1=n-1;
    n2=n-2;
    a=fibonacci(n1);
    b=fibonacci(n2);
    retornar(a+b);
}

Programa prueba(){
    entero r;
    r=fibonacci(5);
    Imprimir("fib(5) = ". r);
}
