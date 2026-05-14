Programa matriz(){
    entero matriz[9];
    entero i;
    entero j;
    entero idx;
    Imprimir("Llenando matriz 3x3:");
    i=0;
    mientras (i<3){
        j=0;
        mientras (j<3){
            idx=i*3+j;
            matriz[idx]=i*3+j+1;
            j=j+1;
        }
        i=i+1;
    }
    Imprimir("Mostrando matriz 3x3:");
    i=0;
    mientras (i<3){
        j=0;
        mientras (j<3){
            idx=i*3+j;
            Imprimir("matriz[". i ."][". j ."] = ". matriz[idx]);
            j=j+1;
        }
        i=i+1;
    }
}