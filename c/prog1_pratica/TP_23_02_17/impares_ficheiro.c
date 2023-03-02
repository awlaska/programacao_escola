/*
 * Criar um programa que crie um ficheiro numerosImpares.txt e escreve os nrs entre 100 e 200 que são ímpares
 */

#include <stdio.h>
#include <stddef.h>

int impares(){
    FILE *fp = NULL;
    int num = 0;

    fp = fopen("../TP_23_02_17/numerosImpares.txt", "w");

    if(fp == NULL){
        printf("ERRO ao abrir o ficheiro!");
        return -1;
    }
    for(num = 0; num <= 200; num++){
        if(num%2 != 0){
            fprintf(fp, "%i\n", num);
        }
    }
    return 0;
}

int ficheiro(){
    FILE *fp = NULL;
    int valor = 0;
    int soma = 0;

    fp = fopen("../TP_23_02_17/numerosImpares.txt", "r");

    if(fp == NULL){
        printf("ERRO ao abrir o ficheiro!");
        return -1;
    }

    while(!feof(fp)){
        fscanf(fp, "%i", &valor);
        soma += valor;
    }

    fclose(fp);

    printf("Soma = %i", soma);

    return 0;
}