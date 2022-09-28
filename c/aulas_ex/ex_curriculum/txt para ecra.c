#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp=NULL;
	
	char vetor[100];
	
	fp = fopen("curriculum.txt", "r");
	
	if(fp == NULL) {
		printf("Erro ao abrir ficheiro");
	return -1;
	}
	
	while(fgets(vetor, 100, fp)!=NULL){
		printf("%s", vetor);
	}
	fclose(fp);
	
return 0;
}
