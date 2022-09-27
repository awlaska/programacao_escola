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
	
	FILE *fp = NULL;
	
	fp=fopen("curriculum.txt", "w");
	
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
		return -1;
	}
	
		fprintf(fp, "Nome:\n-Alexandre\n");
		fprintf(fp, "Número:\n-24585\n");
		fprintf(fp, "Curso:\n-Engenharia Informática\n");
		fprintf(fp, "Disciplinas e nota:\n-AED- 10\n-ASC- 14\n");
	
	fclose(fp);
	
	printf("Ficheiro criado com sucesso\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
