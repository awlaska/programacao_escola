#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main () {
	FILE *fp = NULL;
	fp = fopen("Exemplos.txt", "w"); // abrir o ficheiro "Exemplos.txt" e meter na variavel fp
	if(fp == NULL) {
		printf("ERRO ao abrir o ficheiro\n"); // ver se o ficheiro abriu
		return -1;
	}
	fprintf(fp, "O meu primeiro ficheiro...\n"); //escrever no ficheiro
	fprintf(fp, "Funciona bem!!!\n");
	fclose(fp); // fechar o ficheiro
return 0;
}
