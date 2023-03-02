#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int num;
    float teste1, teste2, pratico;
}ALUNO;

int ex4(){
    // Variaveis
    FILE *fp = NULL;
    char nomeFicheiro[50];
    ALUNO aluno;

    // Pede nome do ficheiro
    printf("Insira o nome do ficheiro: ");
    scanf("%s", nomeFicheiro);

    // Abre ficheiro
    fp = fopen(nomeFicheiro, "w");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        return -1;
    }

    while(1){
        printf("Insira o nu'mero do aluno: ");
        scanf("%i", &aluno.num);
        if(aluno.num == 0){
            break;
        }

        printf("Nota 1o teste: ");
        scanf("%f", &aluno.teste1);
        printf("Nota 2o teste: ");
        scanf("%f", &aluno.teste2);
        printf("Nota trabalho pratico: ");
        scanf("%f", &aluno.pratico);

        fprintf(fp, "%i;%.2f;%.2f;%.2f\n", aluno.num, aluno.teste1, aluno.teste2, aluno.pratico);
    }

    fclose(fp);
    return 0;
}