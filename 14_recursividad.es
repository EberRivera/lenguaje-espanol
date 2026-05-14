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

entero factorial(entero n){
    entero r;
    entero n1;
    si (n<=1){
        retornar(1);
    }
    n1=n-1;
    r=factorial(n1);
    retornar(n*r);
}

Programa recursividad(){
    entero i;
    entero r;
    Imprimir("=== Fibonacci ===");
    i=0;
    mientras (i<8){
        r=fibonacci(i);
        Imprimir("fib(". i .") = ". r);
        i=i+1;
    }
    Imprimir("=== Factorial ===");
    i=1;
    mientras (i<=6){
        r=factorial(i);
        Imprimir(i ."! = ". r);
        i=i+1;
    }
}