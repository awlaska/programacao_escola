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

typedef struct aluno{
	char nome[50];
	char idade[3];
	char escola[100];
}ALUNO;

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
void menu(){
	printf("1- Inserir\n");
	printf("2- Ler\n");
	printf("0- Sair\n");
	printf("\nOpção: ");
}

int menuEscolha(int op){
	struct aluno p;
	
	do{
		menu();
		scanf("%d", &op);
		system("cls");
		switch(op){
			case 1:{
				inserirDados(p);
				break;
			}
			case 2:{
				printDados(p);
				break;
			}
			case 0:{
				//Sair
				break;
			}
		}
	}while(op!=0);
}

inserirDados(struct aluno x){
	printf("\nNome: ");
	scanf("%s", x.nome);
	printf("\nIdade: ");
	scanf("%s", x.idade);
	printf("\nEscola: ");
	scanf("%s", x.escola);	
}

printDados(struct aluno x){
	printf("\nNome: %s;\nIdade: %s;\nEscola: %s;\n\n", x.nome, x.idade, x.escola);
}
/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");

	int opcao;
	
	menuEscolha(opcao);
	
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
