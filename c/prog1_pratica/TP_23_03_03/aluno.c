#include <stdio.h>

typedef struct aluno{
    int num;
    char nome[100];
    float nota;
}ALUNO;

int main(){
    ALUNO alunos[10]; int i;
    long res;
    FILE *fp = NULL;
    ALUNO turma[20];

    fp = fopen("aluno.dat", "wb");

    if(fp == NULL){
        printf("ERRO ao abrir o ficheiro!");
        return -1;
    }

    res = fwrite(&alunos[0], sizeof(ALUNO), 5, fp);
//    printf(total)
    for(i = 0; i <= 5; i++){
        printf("%i - %s %.2f\n", alunos[i].num, alunos[i].nome, alunos[i].nota);
    }

    // another one

    fp = fopen("alunos.dat", "rb");

    if(fp == NULL){
        printf("ERRO ao abrir o ficheiro!");
        return -1;
    }

    res = fread(&turma[0], sizeof(ALUNO), 5, fp);
    printf("Ler %i registos.\n", res);

    for(i = 0; i < res; i++){
        printf("%i - %s %.2f\n", turma[i].num, turma[i].nome, turma[i].nota);
    }
}