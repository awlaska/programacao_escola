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
//Escrever impares para o ficheiro entre 20 e 70
//Escrever impares para o ficheiro entre 20 e 70
//Escrever impares para o ficheiro entre 20 e 70

/*@@@@ DIRECTIVAS DE DEFIN??O                   @@@@*/
/*@@@@ VARI?VEIS GLOBAIS                        @@@@*/
/*@@@@ ESTRUTURAS                               @@@@*/
/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
/*@@@@ FUN??O MAIN                              @@@@*/
int main(int argc, const char * argv[]) {
	
    setlocale(LC_ALL, "Portuguese");
    system("COLOR FC");
    
	int ch;
	
	//tipo de estrutura/dados para ficheiros... *fp é um apontador para o ficheiro
	FILE *fp = NULL;
	
	//abrir o ficheiro... 2 parametros: ("nome do fx", modo de abertura do ficheiro- r, w, a+)
	//Modo de abertura: r(read), w(write), a(append)
	fp=fopen("aula242_2.txt", "r");
	
	//verificar se o ficheiro está aberto
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
		return -1;
	}
	
	//Lê e imprime no ecra o carater (apenas o primeiro- fgetc)
	ch=fgetc(fp);
	//Lê e imprime no ecra carateres até encontrar o carater EOF que fica no final do ficheiro
	while(ch!=EOF){
		printf("%c", ch);
		ch=fgetc(fp);
	}
	
	//fechar o ficheiro
	fclose(fp);
	//Mensagem caso seja sucesso ao criar
	printf("Ficheiro lido com sucesso\n");
	
	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES

