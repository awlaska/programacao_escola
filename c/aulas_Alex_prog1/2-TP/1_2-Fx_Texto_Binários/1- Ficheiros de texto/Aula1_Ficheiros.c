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

/*@@@@ DIRECTIVAS DE DEFIN??O                   @@@@*/

/*@@@@ VARI?VEIS GLOBAIS                        @@@@*/

/*@@@@ ESTRUTURAS                               @@@@*/

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/

/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
	
    setlocale(LC_ALL, "Portuguese");
    system("COLOR FC");
    // DECLARA??O DE VARI?VEIS E DE CONSTANTES
	
	//tipo de estrutura/dados para ficheiros... *fp é um apontador para o ficheiro
	FILE *fp = NULL;
	
	//abrir o ficheiro... 2 parametros: ("nome do fx", modo de abertura do ficheiro- r, w, a+)
	//Modo de abertura: r(read), w(write), a(append)
	fp=fopen("aula242_1.txt", "a");
	
	//verificar se o ficheiro está aberto
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
		return -1;
	}
	//Escrever para o ficheiro (parametro, "o que escrever")
	fprintf(fp, "Ola!\n");
	fprintf(fp, "O meu primeiro ficheiro\n\tfoi um sucesso!\n");
	
	//fechar o ficheiro
	fclose(fp);
	//Mensagem caso seja sucesso ao criar
	printf("Ficheiro criado com sucesso\n");
	
	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
