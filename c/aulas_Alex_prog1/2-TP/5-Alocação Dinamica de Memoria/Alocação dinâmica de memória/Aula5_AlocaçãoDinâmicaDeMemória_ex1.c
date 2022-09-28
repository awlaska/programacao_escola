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
	malloc()
	malloc()
	malloc()
*/
	
//-----------------------------------------------------------


//-----------------------------------------------------------
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	//apontador sempre inicializado em NULL
	char *cidade=NULL;
	
	//alocar 100 espa�os de memoria com malloc 
	//indicar o tipo de mem�ria sempre da seguinte forma
	cidade=(char *) malloc(100);	//char cidade[100]
	
	//caso nao tenha mem�ria apresenta erro
	if(cidade==NULL){
		printf("Out of memory\n");
		return -1;
	}
	
	strcpy(cidade, "Viana do Castelo - praia norte - sem limites");
	printf("%s\n", cidade);
	
	//Libertar sempre a memoria com a fun��o free
	free(cidade);
	
    return 0;
}
//-----------------------------------------------------------
