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

/*Implemente um que programa que permita pedir ao utilizador e guardar num ficheiro de texto o número, nota 1º teste, nota 2º teste e nota trabalho prático de uma lista de alunos. 
O nome do ficheiro deve ser introduzido pelo utilizador. Os valores referentes a um aluno devem ser escritos numa linha e devem ser separados por ‘;’.

Exemplo de ficheiro:

	2345;12;10;14
	1234;11;13;18
	2340;10;15;17
	4567;16;17;16*/

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
/*@@@@ FUN??O MAIN                              @@@@
*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int op, i, num, nota1, nota2, notaTP;
	
	FILE *fp=NULL;
	
	do{
		printf("1-Inserir\n");
		printf("2-Ler\n");
		printf("0-Sair\n\n");
		
		printf("Opção: ");
		scanf("%d", &op);
			switch(op){
				
				//INSERIR NO FICHEIRO
				case 1:{
					printf("\n\nNúmero: ");
						scanf("%d", &num);
					printf("Nota 1ºteste: ");
						scanf("%d", &nota1);
					printf("Nota 2ºteste: ");
						scanf("%d", &nota2);
					printf("Nota TP: ");
						scanf("%d", &notaTP);	
					
					fp=fopen("notas.txt", "a");
					
					if(fp==NULL){
						printf("ERRO!!\n");
						return -1;
					}
						
					fprintf(fp, "%d;%d;%d;%d\n", num, nota1, nota2, notaTP);
					
					fclose(fp);
					break;
				}
				
				//LER O FICHEIRO
				case 2:{
					fp=fopen("notas.txt", "r");
					
					if(fp==NULL){
						printf("ERRO!!\n");
						return -1;
					}
					printf("\n\n");
						while(i!=EOF){
							printf("%c", i);
							i=fgetc(fp);
						}
					printf("\n\n");
					fclose(fp);
					
					break;
				}
				
				//SAIR DO PROGRAMA
				case 0:{
					break;
				}
			}
	}while(op!=0);
				
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
