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
	1º- Implementar um programa que leia do teclado um número inteiro positivo e escreva para o ecrã o respectivo número quadrático. 
		Os números quadráticos são definidos pela seguinte relação de recorrência:
			Se n=1, Q(n)=1
			Se n> 1 , Q(n)=Q(n-1) + 2n-1
	2º- Desrecursive a função implementada anteriormente.
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
	printf("\n\nNumero Quadrático: %d", res);
					
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
