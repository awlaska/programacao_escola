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

//Ficheiros de binários
//Ficheiros de binários
//Ficheiros de binários
//Ficheiros de binários

/*
>>Participante --> Nome;
			   --> Valor pago na inscrição;
		  	   --> Tipo de participante (E-Empresa, A-Aluno, C-Convidado, O-Outro);
			   --> Instituição que representa. 
>>O máximo número de participantes é de 250. 
>>Ficheiro binário “TransfDigital2020.dat”

	1. Programa deverá pedir ao utilizador os dados do participante e acrescentá-los aos dados já armazenados. 
		Os participantes são numerados sequencialmente à medida que são introduzidos no sistema.
	2. Programa deverá permitir listar informação sobre todos os participantes inscritos.
	3. Programa deverá permitir listar a informação sobre um participante (número de inscrição).
	4. Programa deverá permitir listar a informação sobre os participantes de uma determinada instituição. 
		O nome da instituição é introduzido pelo utilizador.
	5. Programa deverá permitir calcular o somatório dos valores pagos por todos os participantes.
	6. Programa deverá permitir saber quantos dos participantes são de um determinado tipo de participante (por ex. aluno).
	7. Escrever informação para ficheiro texto: O programa deverá permitir escrever para o ficheiro de texto “TransfDigital2020_Inscritos.txt” o número e nome de todos os participantes (um participante em cada linha).
	8. Alterar informação: O programa deverá permitir alterar o valor pago por um determinado participante (dado o número de inscrição).
*/
#define tam 2
typedef struct part{
	char nome[50];
	int valor;
	char tipoPart[15];
	char instituicao[100];
} PART;

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
void menu(){
	printf("1- Inserir Participante\n");
	printf("2- Listar participantes\n");
	printf("0- Sair\n");
}

/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	FILE *fp=NULL;
	PART part[tam];
	int op, i=0;
	long res=0, res2=0;

			do{
				menu();
				scanf("%d", &op);
				switch(op){
					case 1:{
						//Inserir
						printf("\nNome: ");
						scanf("%s", part[tam].nome);
						printf("\nValor de inscrição: ");
						scanf("%i", &part[tam].valor);
						printf("\nTipo de participante: ");
						scanf("%s", part[tam].tipoPart);
						printf("\nInstituição: ");
						scanf("%s", part[tam].instituicao);
						
						fp=fopen("TransfDigital2020.dat", "a+b");
							if(fp==NULL){printf("Erro ao abrir ficheiro\n");return -1;}
								res=fwrite(&part[0], sizeof(PART), tam, fp);
								printf("Quantidade de registos: %ld\n", res);
							fclose(fp);
						break;
					}
					case 2:{
						//Listar
						fp=fopen("TransfDigital2020.dat", "a+b");
							if(fp==NULL){printf("Erro ao abrir ficheiro\n");return -1;}
								res2=fread(&part[0], sizeof(PART), tam, fp);
								printf("Quantidade de registos: %ld\n", res);
								
								for(i = 0; i < tam; i++){
									printf("\nParticipante %s|| %i|| %s|| %s||\n", part[i].nome, part[i].valor, part[i].tipoPart, part[i].instituicao);
								}	
						fclose(fp);
						printf("\n\n");
						break;
					}
					case 0:{
						//Sair
						break;
					}
				}		
			}while(op!=0);
			
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
