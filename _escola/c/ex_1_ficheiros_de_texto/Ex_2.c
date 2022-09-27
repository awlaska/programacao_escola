/*--------------------------------------------------*/
/*####             PROGRAMA??O EM C             ####*/
/*--------------------------------------------------*/
/*$$$$ 24-02-2021                               $$$$*/
/*$$$$ nome :    		  			            $$$$*/
/*$$$$ autor:  Alexandre Santos                 $$$$*/
/*--------------------------------------------------*/
/*@@@@ DIRECTIVAS DE INCLUS?O                   @@@@*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Ficheiros de texto
//Ficheiros de texto
//Ficheiros de texto
//Ficheiros de texto

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
/*@@@@ FUN??O MAIN                              @@@@
*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	
	printf("Nome do ficheiro: ");
	scanf("%s", nome);
	strcat(nome, ".txt");
	
	FILE *fp = NULL;
	
	fp=fopen(nome, "w");
	
	if(fp==NULL){
		printf("!!!ERRO ao abrir o ficheiro!!!");
		return -1;
	}
	
	fprintf(fp, "Ola!\n");
	fprintf(fp, "O meu primeiro ficheiro\n\tfoi um sucesso!\n");
	
	fclose(fp);
	

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
