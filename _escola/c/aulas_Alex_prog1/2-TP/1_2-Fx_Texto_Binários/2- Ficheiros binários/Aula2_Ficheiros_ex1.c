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
int main(int argc, const char * argv[]) {
	
    setlocale(LC_ALL, "Portuguese");
    system("COLOR FC");
	
	//1º exemplo de ficheiros binários
	
	//Iniciar a vairavel a null
	FILE *fp=NULL;
	
	//criar array com 14 valores
	int val[14]={2,4,6,8,10,12,14,15,16,17,8,9,20,30};
	long res=0;
	float aux=349.5;
	
	//abrir o ficheiro... 2 parametros: ("nome do fx", modo de abertura do ficheiro- rb, wb, ab)
	//ficheiros binarios sao do tipo .dat
	//Modo de abertura: rb(read binary), w(write binary), ab(append binary)
	fp=fopen("aula0303_1.dat", "wb");
	
	//verificar se o ficheiro está aberto
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
		return -1;
	}
	
	//Escrever para o ficheiro binario (4 parametro: endereço de memoria, tipo de variavel, tamanho, ficheiro)
	res=fwrite(&val[0], sizeof(int), 14, fp);
	printf("Escreveu %ld registos no ficheiro\n", res);
	
	//Escrever para o ficheiro binario a partir do indice 4 (4 parametro: endereço de memoria, tipo de variavel, quantidade de valores que escreve para o fx, ficheiro)
	//res=fwrite(&val[4], sizeof(int), 10, fp);
	//printf("Escreveu %ld registos no ficheiro\n", res);
	
	//Escrever para o ficheiro binario (4 parametro: endereço de memoria, tipo de variavel, tamanho, ficheiro)
	fwrite(&aux, sizeof(float), 1, fp);
	printf("Tamanho do float = %ld\n", sizeof(float));
	
	fclose(fp);
		
	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES

