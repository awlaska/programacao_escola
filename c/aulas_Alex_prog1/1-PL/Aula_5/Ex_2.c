/*--------------------------------------------------*/
/*####             PROGRAMA??O EM C             ####*/
/*--------------------------------------------------*/
/*$$$$ autor:  Alexandre Santos                 $$$$*/
/*--------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*
	Escreva um programa para calcular a m�dia de n n�meros e imprima para o ecr�
		os n�meros inferiores a metade da sua m�dia. O n�mero n � um inteiro introduzido pelo
		utilizador, assim como os n n�meros. O programa n�o deve impor limita��es sobre o
		valor de n e deve reservar a mem�ria estritamente necess�ria.
	Exemplo de execu��o:
		Introduza o n� de n�meros que pretende introduzir: 5
		Introduza os 5 n�meros:
			10
			4
			5
			25
			20
		N�meros inferiores a (12.8): 10,4,5
*/

/*--------------------------------------------------*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    int *valores=NULL;
    int qtd=0, i=0, soma=0, cont=0;
    float media=0;
    
	printf("Quantidade de valores: ");
	scanf("%d", &qtd);
	
	valores=(int *)calloc(qtd, sizeof(int));
	
	if(valores==NULL){
		printf("OUT OF MEMORY");
		return -1;
	}
	
	for(i=0; i<qtd; i++){
		printf("Valor: ");
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
    
	printf("\n\n");
    return 0;
}
/*--------------------------------------------------*/
