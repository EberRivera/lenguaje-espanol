entero mayor3(entero a, entero b, entero c){
    si (a>b y a>c){
        retornar(a);
    }
    si (b>a y b>c){
        retornar(b);
    }
    retornar(c);
}

Programa demo(){
    entero a;
    entero b;
    entero c;
    entero resultado;
    entero i;
    entero numeros[5];
    Imprimir("=== Demo Completo ===");
    a=Ingresar("Ingrese primer numero");
    b=Ingresar("Ingrese segundo numero");
    c=Ingresar("Ingrese tercer numero");
    Imprimir("--- Operaciones ---");
    resultado=a+b;
    Imprimir("Suma a+b: ". resultado);
    resultado=a*b;
    Imprimir("Mult a*b: ". resultado);
    Imprimir("--- Mayor de los tres ---");
    resultado=mayor3(a, b, c);
    Imprimir("El mayor es: ". resultado);
    Imprimir("--- Arreglo con valores ---");
    numeros[0]=a;
    numeros[1]=b;
    numeros[2]=c;
    numeros[3]=a+b;
    numeros[4]=b+c;
    i=0;
    mientras (i<5){
        Imprimir("numeros[". i ."] = ". numeros[i]);
        i=i+1;
    }
    Imprimir("=== Fin del demo ===");
}