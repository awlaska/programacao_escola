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
	Alocação dinâmica de memória
	Alocação dinâmica de memória
	Alocação dinâmica de memória
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
	
	//alocar 100 espaços de memoria com malloc 
	//indicar o tipo de memória sempre da seguinte forma
	cidade=(char *) malloc(100);	//char cidade[100]
	
	//caso nao tenha memória apresenta erro
	if(cidade==NULL){
		printf("Out of memory\n");
		return -1;
	}
	
	strcpy(cidade, "Viana do Castelo - praia norte - sem limites");
	printf("%s\n", cidade);
	
	//Libertar sempre a memoria com a função free
	free(cidade);
	
    return 0;
}
//-----------------------------------------------------------
