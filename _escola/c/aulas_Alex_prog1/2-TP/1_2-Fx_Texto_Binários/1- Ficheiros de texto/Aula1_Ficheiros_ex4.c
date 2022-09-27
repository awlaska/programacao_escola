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
	
	//tipo de estrutura/dados para ficheiros... *fp é um apontador para o ficheiro
	FILE *fp = NULL;
	char linha[50], *res;
	int i=0;
	//abrir o ficheiro... 2 parametros: ("nome do fx", modo de abertura do ficheiro- r, w, a+)
	//Modo de abertura: r(read), w(write), a(append)
	fp=fopen("aula242_1.txt", "r");
	
	//verificar se o ficheiro está aberto
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
		return -1;
	}
	
	//Lê e imprime no ecra strings (fgets)
	while(!feof(fp)){
		res=fgets(linha, 50, fp);
		//Nao repete a ultima linha
		if(res){
			printf("%s", linha);
			i++;
		}
	}
	
	//fechar o ficheiro
	fclose(fp);
	//Mensagem caso seja sucesso ao criar
	printf("\nFicheiro lido com sucesso\nTotal de linhas= %i\n", i);
	
	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES

