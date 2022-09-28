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
	1�- Implementar um programa que leia do teclado um n�mero inteiro positivo e escreva para o ecr� o n�mero.
		� definido pela seguinte rela��o de recorr�ncia:
			Se n <=10 -> Seq(n)=10
			Se n > 10 -> Seq(n)=2n - Seq (n-1) + 4
	2�- Desrecursive a fun��o implementada anteriormente.
*/

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
int calcForm(int num){
	if(num <= 10) return 1;
	return(2 * num - calcForm(num -1) + 4);
}
/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int x=0, res=0;
	
	printf("\nValor de X: ");
	scanf("%d", &x);
	
	res=calcForm(x);
	printf("\n\nResultado: %d", res);
					
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
