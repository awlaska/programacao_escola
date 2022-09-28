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

//Implemente um programa que lê o ficheiro “numImpares.txt”.

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
/*@@@@ FUN??O MAIN                              @@@@
*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int i;		
	FILE *fp = NULL;
	
	fp=fopen("numImpares.txt", "r");
	
	if(fp==NULL){
		printf("ERRO!!\n");
		return -1;
	}
		i=fgetc(fp);
		while(i!=EOF){		
			printf("%c", i);
			i=fgetc(fp);
		}
	
	fclose(fp);
	printf("Ficheiro lido com sucesso\n");	
	
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
