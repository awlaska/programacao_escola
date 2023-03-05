#include <stdio.h>
#include <stdlib.h>

int binario1(){
    FILE *fp = NULL;
    int valores[] = {18, 10, 12, 20, 24, 35, 37, 50, 78, 100};
    long res = 0;

    fp = fopen("aluno.dat", "wb");

    if(fp == NULL){
        printf("ERRO ao abrir o ficheiro!");
        return -1;
    }

    res = fwrite(&valores[0]);

    fclose(fp);
    return 0;
}