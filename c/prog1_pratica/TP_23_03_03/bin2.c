#include <stdio.h>
#include <stdlib.h>

int binario1(){
    FILE *fp = NULL;
    int numeros[20], i = 0;
    long res = 0;

    fp = fopen("numero.dat", "rs");

    if(fp == NULL){
        printf("ERRO ao abrir o ficheiro!");
        return -1;
    }



}