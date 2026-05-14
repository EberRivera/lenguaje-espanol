Programa arreglo_simple(){
    entero numeros[5];
    entero i;
    numeros[0]=10;
    numeros[1]=25;
    numeros[2]=8;
    numeros[3]=42;
    numeros[4]=15;
    Imprimir("Valores del arreglo:");
    i=0;
    mientras (i<5){
        Imprimir("numeros[". i ."] = ". numeros[i]);
        i=i+1;
    }
    entero mayor;
    mayor=numeros[0];
    i=1;
    mientras (i<5){
        si (numeros[i]>mayor){
            mayor=numeros[i];
        }
        i=i+1;
    }
    Imprimir("El mayor es: ". mayor);
}