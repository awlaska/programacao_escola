#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	FILE *fp = NULL;
	fp = fopen("Curriculum.txt", "w"); // abrir o ficheiro "Curriculum.txt" e meter na variavel fp
	if(fp == NULL) {
		printf("ERRO ao abrir o ficheiro\n"); // ver se o ficheiro abriu
		return -1;
	}
	fprintf(fp, "Sofia Sousa\n23435\nEngenharia Informática\n\nMatemática Discreta: 10\nAnálise Matemática: 10"); //escrever no ficheiro
	fclose(fp); // fechar o ficheiro
	
return 0;
}
