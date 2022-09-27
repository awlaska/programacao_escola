/*--------------------------------------------------*/
/*####             PROGRAMA??O EM C             ####*/
/*--------------------------------------------------*/
/*$$$$ 10-03-2021                               $$$$*/
/*$$$$ nome :    		  			            $$$$*/
/*$$$$ autor:  Alexandre Santos                 $$$$*/
/*--------------------------------------------------*/
/*@@@@ DIRECTIVAS DE INCLUS?O                   @@@@*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
	//1º exemplo de funções recursivas
	//1º exemplo de funções recursivas

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
//Recursiva-->consomem mais recursos
long calFib(int num){
	if(num==1 || num==2) return 1;
	return(calFib(num-1)+calFib(num-2));
}

//Iterativa-->é mais leve na memória do computador <=> melhor performance
long calFibIt(int num){
	int i=0;
	long res=1, ant=1, antAnt=1;
	
	for(i=3; i<=num; i++){
		res=ant+antAnt;
		antAnt=ant;
		ant=res;
	}
	return res;
}

/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
    int val=0;
    long res=0;
    
    printf("Introduza um numero: ");
    scanf("%i", &val);
    
	res=calFibIt(val);
	printf("\nIterativo - fib(%i) = %ld", val, res);
	
    res=calFib(val);
    printf("\nRecursivo - fib(%i) = %ld", val, res);


	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
/*
i=3

res=1+1
antAnt=1
ant=2

i=4

res=1+2=3
antAnt=2
ant=3

i=5

res=2+3=5
antAnt=3
ant=5
*/
