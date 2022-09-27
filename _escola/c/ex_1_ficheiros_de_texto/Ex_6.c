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
O nome do ficheiro deverá ser “Cimeira2020.txt”.

Implementar um programa que permita guardar num ficheiro de texto a lista de pessoas inscritas na cimeiraIPVC2020. O programa deverá permitir acrescentar novas inscrições e listar inscrições feitas até ao momento. 

	a. Inserir nova inscrição - O programa deverá pedir ao utilizador o nome, nº de telefone, nome instituição de proveniência do participante que se pretende inscrever. 
A informação de um participante será escrita numa linha. A inserção terminará quando o utilizador digitar a palavra ‘FIM’. Deverá ser possível acrescentar novas inscrições ao ficheiro sempre que necessário. 
Sempre que um novo elemento se inscreve é-lhe fornecido um número de inscrição.

	b. Listar inscrições feitas até ao momento - O programa deverá ler o ficheiro criado no exercício anterior e imprimir para o ecrã o conteúdo do ficheiro de texto.
	
	c. Alterar os dados de inscrição de um participante, dado o número de inscrição.	
*/
	
	//1º- Switch case-- FEITO
	//2º- abrir, criar ficheiro, fechar-- FEITO
	//3º- criar variáveis char (nome[50], telefone[9], instituto[100])-- FEITO
	//4º- Inserir informação com fprintf-- FEITO
	//5º- Ler o ficheiro para ler-- FEITO
	//6º- Associar numero random a cada inscrição nova-- FEITO
	//7º- Editar informação através do número de inscrição
	

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
void menu(){
	printf("\n1- Inserir");
	printf("\n2- Ler");
	printf("\n3- Alterar");
	printf("\n0- Sair");
	
	printf("\n\nOção: ");
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
								//numero é gerado automaticamente
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
				//Alterar informação
				case 3:{						
					//printf("Número do ficheiro: ");
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
