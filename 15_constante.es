Programa constantes(){
    constante entero MAX = 100;
    constante entero MIN = 0;
    entero valor;
    valor=50;
    Imprimir("MAX = ". MAX);
    Imprimir("MIN = ". MIN);
    Imprimir("valor = ". valor);
    si (valor>MIN y valor<MAX){
        Imprimir("El valor esta dentro del rango");
    }delocontrario{
        Imprimir("El valor esta fuera del rango");
    }
}