#include <stdio.h>
#include <stdlib.h>

/*
 * nome ficheiro
 * open file
 * while ((fscanf) == 4)
 * calula
*/

int main(){
    FILE *fp = NULL;
    char nomeFicheiro[50];
    int numAluno, nota1, nota2, pratico, aprovados = 0;

    printf("Insira o nome do ficheiro: ");
    scanf("%s", nomeFicheiro);

    // Abre ficheiro
    fp = fopen("../curriculum.txt", "w");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        return -1;
    }

    while(fscanf(fp, "%i;%i;%i;%i", &numAluno, &nota1, &nota2, &pratico) == 4){

    }

    fclose(fp);
    return 0;
}