#include <stdio.h>

typedef struct{
    char disciplinas[50];
    float nota;
}DISCIPLINA;

int ex1(){
    // Variaveis
    FILE *fp = NULL;

    DISCIPLINA disciplinas[40];
    char nome[100], curso[50];
    int num = 0, numDisciplinas = 0;

    // Abre ficheiro
    fp = fopen("../curriculum.txt", "w");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        return -1;
    }

    // Pede informacao
    printf("Insira o seu nome: ");
    scanf("%[^\n]s", nome);
    fflush(stdin);

    printf("Insira o seu nu'mero: ");
    scanf("%d", &num);
    fflush(stdin);

    printf("Insira nome do seu curso: ");
    scanf("%[^\n]s", curso);
    fflush(stdin);

    printf("Insira o nu'mero de disciplinas que ja' completou: ");
    scanf("%d", &numDisciplinas);
    fflush(stdin);

    // Escreve informacao no ficheiro
    fprintf(fp, "Nome do aluno: %s\n", nome);
    fprintf(fp, "Nu'mero do aluno: %i\n", num);
    fprintf(fp, "Nome do curso: %s\n", curso);

    // Pedir as disciplinas e escreve no ficheiro
    for(int i = 0; i < numDisciplinas; i++){
        printf("Insira o nome da %d a disciplina: ", i+1);
        scanf("%[^\n]s", disciplinas[i].disciplinas);
        fflush(stdin);
        printf("Insira a nota da %d a disciplina: ", i+1);
        scanf("%f", &disciplinas[i].nota);
        fflush(stdin);

        fprintf(fp, "\n%s - %.2f", disciplinas[i].disciplinas, disciplinas[i].nota);
    }

    fclose(fp);
    return 0;
}