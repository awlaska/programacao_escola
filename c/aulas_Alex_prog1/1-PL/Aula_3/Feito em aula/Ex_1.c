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

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
//função recursiva para calcular x^y (x e y são valores inseridos pelo utilizador)
int calXY(int base, int exp){
	//1º- Critério de paragem
	if(exp==0) return 1;
	return(base * calXY(base, exp - 1));
}

//função iterativa para calcular x^y (x e y são valores inseridos pelo utilizador)
int calXYIter(int base, int exp){
	int i, res=1;

	for(i = 1; i<=exp; i++){
		res *= base;
	}
	
	return res;
}

/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int valX=0, valY=0;

	int res=0;
	int resI = 1;
	
	printf("Insira X: ");
	scanf("%d", &valX);
	printf("\nInsira Y: ");
	scanf("%d", &valY);	
	
	//Recursiva
	res=calXY(valX, valY);
	printf("\nResultado (Recur) x^y = %d", res);
	
	//Iterativa
	resI=calXYIter(valX, valY);
	printf("\nResultado (Iter) x^y = %d", resI);

	printf("\n\n");
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
