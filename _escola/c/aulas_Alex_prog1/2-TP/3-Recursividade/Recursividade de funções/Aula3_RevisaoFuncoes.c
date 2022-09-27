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

/*@@@@ ESTRUTURAS                               @@@@*/


/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
int verificarPrimo(int num){
	//0- não primo 1- primo
	int i=0;
	for(i = 2; i < num; i++){
		if(num%i==0){
			return 0;
		}	
	}
}

/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
	
    setlocale(LC_ALL, "Portuguese");
    system("COLOR FC");
	
	int num;
	
	//Numeros primos
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	if(verificarPrimo(num)){
		printf("\nÉ primo!!");
	}else{
		printf("\nNão é primo!!");
	}
	
	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES

