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
//função recursiva para calcular tamanho de uma string
int calString(char nome[], int indice){
	//1º- Critério de paragem
	if(nome[indice] == '\0') 
		return 0;
		
	return 1+calString(nome, indice+1);
}
/*@@@@ FUN??O MAIN                              @@@@
*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
    system("COLOR FC");
	
	char string[40]= "Um Nome";
	int t;
	
	t=calString(string, 0);
	printf("Tamanho da string: %d\n", t);

	printf("\n\n");
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
