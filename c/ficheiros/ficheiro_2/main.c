#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	FILE *fp=NULL;
	
	fp=fopen("Exemplo.txt", "wb");
	
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
		return -1;
	}
	res=fwrite(&x, sizeof(int), 1, fp);
	printf("Escrever %i valores")
	
	return 0;
}
