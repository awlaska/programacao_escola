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

//Ficheiros de texto
//Ficheiros de texto
//Ficheiros de texto
//Ficheiros de texto

//Implemente um programa que escreve para o ficheiro �numImpares.txt� 
//os n�meros �mpares existentes entre 563 e 677. Escreva um n�mero em cada linha.

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
/*@@@@ FUN??O MAIN                              @@@@
*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int i, impar=0;		
	
	FILE *fp = NULL;
	
	fp=fopen("numImpares.txt", "w");
	
		fprintf(fp, "N�mero �mpares entre 563 e 677:\n\n");
			for(i = 563; i <= 677; i++){
				impar = i%2;
			
				if(impar)
					fprintf(fp, "%d\n", i);
			}
	
	fclose(fp);
	
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
