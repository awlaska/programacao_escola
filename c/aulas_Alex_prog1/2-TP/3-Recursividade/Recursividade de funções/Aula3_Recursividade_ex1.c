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
//função recursiva
int calFact(int num){
	//1ºlinha é o criterio de paragem
	//se o meu numero for 0 retorna 1
	if(num==0) return 1;
	return(num *calFact(num-1));
}

//função iterativa
int calcFactIt(int num){
	int i=0, res=1;
	
	for(i=1; i<=num; i++){
		res*=i; //res=res*i
	}
	return res;
}

//função recursiva
int calSum(int num){
	if(num==0) return 0;
	return(num + calSum(num-1));
}

//função iterativa
int calSumIt(int num){
	int i=0, res=0;
	
	for(i=0; i<=num; i++){
		res+=i;
	}
	return res;
}

/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
	//val é igual ao parametro num na função
	int val=0, res=0;
	
	printf("\n");
	
	printf("Introduza um numero: ");
	scanf("%d", &val);
	
	res=calFact(val);
	printf("Factorial Recursivo - %i!=%i\n", val, res);
	
	res=calcFactIt(val);
	printf("Factorial Iterativo - %i!=%i\n", val, res);
	
	printf("\n");
	
	res=calSum(val);
	printf("Somatorio recursivo - %i=%i\n", val, res);
	
	res=calSumIt(val);
	printf("Somatorio iterativo - %i=%i\n", val, res);
		
	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
/*
vai calcular todos os fatoriais anteriores ao valor inserido em loop (função recursiva)

calFact(6)
return(6*calfact(5)) - return (6*120) --> 720

calFact(5)
return(5*calfact(4)) - return (5*24)

calFact(4)
return(3*calfact(4)) - return (4*6)

calFact(3)
return(2*calfact(3)) - return (3*2)

calFact(2)
return(1*calfact(2)) - return (2*1)

calFact(1)
return(1*calfact(0)) - return (1*1)

calFact(0)
return 1
*/
