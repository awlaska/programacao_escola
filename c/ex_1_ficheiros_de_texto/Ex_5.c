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

/*
Implementar um programa que permita ler o ficheiro criado no exerc�cio anterior e enviar para o ecr�:
	a. n� dos alunos com Nota Final (NF) positiva, sabendo que NF = 25%teste1 (0.25*teste1) + 25%teste2 (0.25*teste2) + 50%TP (0.50*testeTP). No final dever� apresentar a quantidade de alunos aprovados.
	b. Saber a m�dia das notas por avalia��o (teste 1, teste 2 e TP).
	c. N� do(s) aluno(s) com nota to TP mais alta.
	d. N� do(s) aluno(s) com nota mais baixa no teste1.	
*/

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
/*@@@@ FUN??O MAIN                              @@@@
*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int num=0, teste1=0, teste2=0, testeTP=0, res=0, aprovados=0;
	float nf;
	
	
	FILE *fp=NULL;
	fp=fopen("notas.txt", "r");
	
	if(fp==NULL){
		printf("ERRO!!\n");
		return -1;
	}
	//algoritmo a aplicar
		printf("M�dias de alunos aprovados: \n\n");
		while(!feof(fp)){
			res=fscanf(fp, "%i;%i;%i;%i", &num, &teste1, &teste2, &testeTP);
			if(res > 0){
				nf = 0.25*teste1 + 0.25*teste2 + 0.50*testeTP;
				if(nf >= 9.5){
					aprovados++;
					printf("%i-> %.1f\n", num, nf);	
				}
			}
		}
	
	//algoritmo a aplicar
	fclose(fp);
	
	printf("\nQuantidade de Aprovados: %i\n", aprovados);
			
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
