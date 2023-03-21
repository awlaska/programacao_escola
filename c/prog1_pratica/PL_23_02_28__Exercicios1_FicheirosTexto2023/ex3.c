#include <stdio.h>
#include <stdlib.h>

int ex3() {
    int linha;
    FILE *fp = NULL;
    char *res = NULL;

    fp = fopen("../numMul7.txt", "w");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        exit(EXIT_FAILURE);
    }

    for(int i = 500; i <= 700; i++){
        if(i % 7 == 0){
            fprintf(fp, "%d\n", i);
        }
    }

    fclose(fp);
    return 0;
}