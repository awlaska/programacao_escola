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
	
	//tipo de estrutura/dados para ficheiros... *fp é um apontador para o ficheiro
	FILE *fp = NULL;
	int num1=0, num2, res=0, cont=0, soma2=0, soma1=0;
	char ch, nome[20];
	
	//abrir o ficheiro... 2 parametros: ("nome do fx", modo de abertura do ficheiro- r, w, a+)
	//Modo de abertura: r(read), w(write), a(append)
	fp=fopen("aula242_2.txt", "r");
	
	//verificar se o ficheiro está aberto
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
		return -1;
	}
	
	//Lê e imprime no ecra numeros (fscanf)
	while(!feof(fp)){
		//parametros: ficheiro que estou a ler, tipo de dados, variavel
		res=fscanf(fp, "%i %i %c %s", &num1, &num2, &ch, nome);
		if(res>0){
			cont++;
			soma2+=num2;
			soma1+=num1;
			printf("%i %i %c %s\n", num1, num2, ch, nome);
		}
	}
	
	//fechar o ficheiro
	fclose(fp);
	//Mensagem caso seja sucesso ao criar
	printf("\nQuantidade= %i\nSoma da segunda coluna= %i\nSoma da primeira coluna= %i\n", cont, soma2, soma1);
	
	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES

