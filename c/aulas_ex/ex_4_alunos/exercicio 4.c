#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp = NULL;
	
	char nomef[100];
	int numAluno = 0, notaTeste1, notaTeste2, notaTP = 0;
	
	printf("Introduza o nome do ficheiro: \n"); // pedir nome do ficheiro
	scanf("%s", nomef);
	
	strcat(nomef, ".txt");
	
	fp = fopen(nomef, "a"); // abrir o ficheiro .txt e meter na variavel fp
	
	if(fp == NULL) {
		printf("ERRO ao abrir o ficheiro %s\n", nomef); // ver se o ficheiro abriu
		return -1;
	}
	
	do{
		printf("Número do aluno: \n"); //escrever no ficheiro
		scanf("%i", numAluno);
		if(numAluno =! 0) {
			printf("Nota do Primeiro Teste: \n");
			scanf("%i", notaTeste1);
			printf("Nota do Segundo Teste: \n");
			scanf("%i", notaTeste2);
			printf("Nota do Trabalho Prático: \n\n");
			scanf("%i", notaTP);
			fprintf(fp, "%i;%i;%i;%i", numAluno, notaTeste1, notaTeste2, notaTP);
		}
	} while(numAluno != 0);
	fclose(fp);
return 0;
}
