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
O nome do ficheiro dever� ser �Cimeira2020.txt�.

Implementar um programa que permita guardar num ficheiro de texto a lista de pessoas inscritas na cimeiraIPVC2020. O programa dever� permitir acrescentar novas inscri��es e listar inscri��es feitas at� ao momento. 

	a. Inserir nova inscri��o - O programa dever� pedir ao utilizador o nome, n� de telefone, nome institui��o de proveni�ncia do participante que se pretende inscrever. 
A informa��o de um participante ser� escrita numa linha. A inser��o terminar� quando o utilizador digitar a palavra �FIM�. Dever� ser poss�vel acrescentar novas inscri��es ao ficheiro sempre que necess�rio. 
Sempre que um novo elemento se inscreve �-lhe fornecido um n�mero de inscri��o.

	b. Listar inscri��es feitas at� ao momento - O programa dever� ler o ficheiro criado no exerc�cio anterior e imprimir para o ecr� o conte�do do ficheiro de texto.
	
	c. Alterar os dados de inscri��o de um participante, dado o n�mero de inscri��o.	
*/
	
	//1�- Switch case-- FEITO
	//2�- abrir, criar ficheiro, fechar-- FEITO
	//3�- criar vari�veis char (nome[50], telefone[9], instituto[100])-- FEITO
	//4�- Inserir informa��o com fprintf-- FEITO
	//5�- Ler o ficheiro para ler-- FEITO
	//6�- Associar numero random a cada inscri��o nova-- FEITO
	//7�- Editar informa��o atrav�s do n�mero de inscri��o
	

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
void menu(){
	printf("\n1- Inserir");
	printf("\n2- Ler");
	printf("\n3- Alterar");
	printf("\n0- Sair");
	
	printf("\n\nO��o: ");
}

/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	int op, i;
	char nome[50], telefone[9], instituto[100];
	FILE *fp=NULL;
	
	do{
		menu();
		scanf("%i", &op);
			switch (op){
				//Inserir
				case 1:{
					//Abrir ficheiro
					fp=fopen("Cimeira2020.txt", "a");
						if(fp==NULL){printf("\n\n\t!!ERRO!!\n");return -1;}
							//Pedir ao utilizador info
							printf("\nNome: ");
								scanf("%s", nome);
							printf("\nTelefone: ");
								scanf("%s", telefone);
							printf("\nInstituto: ");
								scanf("%s", instituto);			
								//Escrever para o ficheiro
								//numero � gerado automaticamente
								fprintf(fp, "%d; %s; %s; %s\n", rand(), nome, telefone, instituto);
					//Fechar ficheiro
					fclose(fp);
					break;
				}
				//Ler ficheiro
				case 2:{
					//Abrir ficheiro
					fp=fopen("Cimeira2020.txt", "r");
						if(fp==NULL){printf("\n\n\t!!ERRO!!\n");return -1;}
							//Ler ficheiro
							printf("\n");
							while(i!=EOF){
								printf("%c", i);
								i=fgetc(fp);
							}
							printf("\n");
					//Fechar ficheiro
					fclose(fp);
					break;
				}
				//Alterar informa��o
				case 3:{						
					//printf("N�mero do ficheiro: ");
					//	scanf("%i", &num);
						//Abrir ficheiro
						fp=fopen("Cimeira2020.txt", "a");
							if(fp==NULL){printf("\n\n\t!!ERRO!!\n");return -1;}
								//Alterar dados do ficheiro
	
								
								
						//Fechar ficheiro
						fclose(fp);
					break;
				}
				//Sair
				case 0:{
					break;
				}
			}
	}while(op!=0);
					
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
