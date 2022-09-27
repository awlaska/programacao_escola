/*--------------------------------------------------*/
/*####             PROGRAMA??O EM C             ####*/
/*--------------------------------------------------*/
/*$$$$ 03-03-2021                               $$$$*/
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

void printArray(int val[], int qtd){
	int i=0;
	for(i = 0; i < qtd; i++){
		printf("Valor = %i\n", val[i]);
	}
}

int main(int argc, const char * argv[]) {
	
    setlocale(LC_ALL, "Portuguese");
    system("COLOR FC");
	
	//ler ficheiros binarios
	
	//Iniciar a vairavel a null
	FILE *fp=NULL;
	
	//criar array com tamanho 20 e int i para ler ficheiro
	int valores[20];
	float aux=0;
	long res=0;
	
	//abrir o ficheiro... 2 parametros: ("nome do fx", modo de abertura do ficheiro- rb, wb, ab)
	//ficheiros binarios sao do tipo .dat
	//Modo de abertura: rb(read binary), w(write binary), ab(append binary)
	fp=fopen("aula0303_1.dat", "rb");
	
	//verificar se o ficheiro está aberto
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
		return -1;
	}
	
	//Ler o ficheiro binario (4 parametro: endereço de memoria, tipo de variavel, tamanho, ficheiro)
	res=fread(&valores[0], sizeof(int), 14, fp);
	printf("Leu %ld valores no ficheiro\n", res);
	
	//Funçao para mostrar os valores no array
	printArray(valores, 14);
	
	//Le o valor guardado no float inserido no ficheiro
	fread(&aux, sizeof(float), 1, fp);
	printf("Valor final = %.2f\n", aux);
	
	//Fechar o ficheiro
	fclose(fp);
		
	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES

