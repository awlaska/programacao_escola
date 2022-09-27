/*--------------------------------------------------*/
/*####             PROGRAMA??O EM C             ####*/
/*--------------------------------------------------*/
/*$$$$ 07-04-2021                               $$$$*/
/*$$$$ autor:  Alexandre Santos                 $$$$*/
/*--------------------------------------------------*/
/*@@@@ DIRECTIVAS DE INCLUS?O                   @@@@*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*
	Aloca��o din�mica de mem�ria
	Aloca��o din�mica de mem�ria
	Aloca��o din�mica de mem�ria
	realloc()
	realloc()
	realloc()
*/
	
//-----------------------------------------------------------


//-----------------------------------------------------------
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	char *nome=NULL;
	
	nome=(char *)calloc(4, sizeof(char));
	
	if(nome==NULL){
		printf("OUT of MEMORY!!");
		return -1;
	}
	
	strcpy(nome, "Ana");
	
	printf("\nNome incompleto: %s\n", nome);
	
	nome=(char *)realloc(nome, 50*sizeof(char));
	if(nome==NULL){
		printf("OUT of MEMORY!!");
		return -1;
	}else{
		strcat(nome, " Maria Costa Cunha Silva");
	}
	
	printf("\nNome completo: %s\n", nome);
	
	free(nome);	
    return 0;
}
//-----------------------------------------------------------





