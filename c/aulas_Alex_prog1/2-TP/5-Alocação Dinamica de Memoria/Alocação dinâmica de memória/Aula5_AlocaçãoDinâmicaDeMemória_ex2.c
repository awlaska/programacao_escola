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
	
	**EX** -> reservar mem�ria estritamente necess�ria <-
		Reservar memoria para um array de N valores
		ler os valores e saber quais os valores superiores � m�dia
	**EX** -> reservar mem�ria estritamente necess�ria <-
*/
	
//-----------------------------------------------------------


//-----------------------------------------------------------
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int *valores=NULL;
	int qtd=0, soma=0, i=0, cont=0;
	float media=0;
	
	printf("Com quantos valores pretende trabalhar?\n");
	scanf("%i", &qtd);
	
	//reserva a quantidade que o utilizador escolhe
	//multiplica a quantidade introduzida pelo tamanho do int (qtd*4)
	valores=(int *) malloc(qtd*sizeof(int));
	
	if(valores==NULL){
		printf("Out of memory\n");
		return -1;
	}
	
	for(i=0; i<qtd; i++){
		printf("Introduza o valor %i: ", i+1);
		scanf("%i", &valores[i]);
		soma+=valores[i];
	}
	
	media=(float)soma/qtd;
	printf("Valores superiores a %.2f\n", media);
	for(i=0; i<qtd; i++){
		if(valores[i]>media){
			printf("%i\n", valores[i]);
			cont++;
		}
	}
	
	printf("%i est�o acima da m�dia", cont);
	
	free(valores);	
    return 0;
}
//-----------------------------------------------------------





