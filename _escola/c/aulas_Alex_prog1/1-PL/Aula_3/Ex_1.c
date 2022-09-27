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
	1�- Desenvolver um programa que, dando o valor de x e y calcule x^y recorrendo ao uso da recursividade. 
	2�- Desrecursive a fun��o implementada anteriormente.
*/

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/

int calcXY(int base, int exp){
	//1�- Crit�rio de paragem (caso o expoente seja igual a 0 retorna 1
	if(exp==0) return 1;
	//2�- Caso expoente seja diferente de 0 passa � fase seguinte
	//3�- Return(f�rmula do problema em quest�o)--> conteudo que a fun��o vai retornar
	return(base * calcXY(base, exp - 1));
}

/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int X=0, Y=0, res=0;
	
	printf("\nValor de X: ");
	scanf("%d", &X);
	printf("\nValor de Y: ");
	scanf("%d", &Y);
	
	//chamar a fun��o
	res=calcXY(X, Y);
	printf("\nResultado: %d", res);
		
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
