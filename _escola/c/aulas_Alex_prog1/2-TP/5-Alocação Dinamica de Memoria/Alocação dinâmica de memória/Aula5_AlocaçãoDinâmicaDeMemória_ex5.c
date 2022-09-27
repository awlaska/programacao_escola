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
	realloc()
	realloc()
	realloc()
	
	Ler do user N valores decimais
	Deve escrever para o ecra os valores na ordem inversa á introduzida
	1 2 3 4 5 --> 5 4 3 2 1
*/
	
//-----------------------------------------------------------


//-----------------------------------------------------------
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	float *numeros=NULL;
	int qtd=0, i=0;
	
	printf("Quantidade de numeros: ");
	scanf("%i", &qtd);
	
	numeros=(float *)calloc(qtd, sizeof(float));
	
	if(numeros==NULL){
		printf("OUT of MEMORY!!");
		return -1;
	}
	
	for(i=0; i<qtd; i++){
		printf("Valor %i: ", i+1);
		scanf("%f", &numeros[i]);
	}
	
	for(i=qtd-1; i>=0; i--){
		printf("Valor inverso: %.1f\n", numeros[i]);
	}
	
	free(numeros);	
    return 0;
}
//-----------------------------------------------------------





