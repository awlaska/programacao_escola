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

//Recursividade
//Recursividade
//Recursividade
//Recursividade

/*
	1º- Implementar uma função recursiva que calcule o somatório de um array de inteiros. 
		Os números do array deverão ser introduzidos pelo utilizador.
*/

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
int calcArray(int ar[], int i){
	if(i <= 0) return 0;
	return (calcArray(ar, i - 1) + ar[i - 1]);
}

/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int size=0;
	int arr[size];
	int i, res=0;
	
	printf("\nTamanho do array: ");
	scanf("%d", &size);
	
	for(i=0; i<size; i++){
		printf("\nInsira x: ");
		scanf("%d", &arr[i]);
	}

	res=calcArray(arr, size);
	printf("\n\nResultado: %d", res);
	
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
