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
	1�- Implementar um programa que leia do teclado um n�mero inteiro positivo e escreva para o ecr� o respectivo n�mero quadr�tico. 
		Os n�meros quadr�ticos s�o definidos pela seguinte rela��o de recorr�ncia:
			Se n=1, Q(n)=1
			Se n> 1 , Q(n)=Q(n-1) + 2n-1
	2�- Desrecursive a fun��o implementada anteriormente.
*/

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
int calQuad(int num){
	if(num == 1) return 1;
	return (calQuad( num -1 ) + 2 * num - 1);
}

/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int x=0, res=0;
	
	printf("\nValor de X: ");
	scanf("%d", &x);
	
	res=calQuad(x);
	printf("\n\nNumero Quadr�tico: %d", res);
					
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
