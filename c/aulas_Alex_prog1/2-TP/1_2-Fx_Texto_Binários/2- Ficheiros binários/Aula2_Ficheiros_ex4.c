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

typedef struct aluno{
	int num;
	char nome[100];
	char morada[100];
	float nota;
} ALUNO;

int main(int argc, const char * argv[]) {
	
    setlocale(LC_ALL, "Portuguese");
    system("COLOR FC");
	
	//Array de estruturas com ficheiros
	
	ALUNO alunos[10]={{1, "Ana Silva", "Viana", 18.9}, {2, "Rui Silva", "Fafe", 10.9}, 
	{3, "Ana Rita", "Viana do Castelo", 12.9}, {4, "Marta Pereira da Silva", "Porto", 11.2}, 
	{5, "Bruno Pires", "Porto", 13.6}, {6, "Pedro Soares", "Braga", 13.6}, 
	{7, "Biana Jesus", "Lisboa", 14.2}, {8, "Ana Maria", "Lanhelas", 16.3},
	{9, "Marta Ferreira", "Viana", 14.2}, {10, "Marta Costa", "Viana", 15.2}};
	
	//Iniciar a vairavel a null
	FILE *fp=NULL;
	long res=0;
	
	fp=fopen("alunos.dat", "wb");
	
	//verificar se o ficheiro está aberto
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
		return -1;
	}
	
	//Escrever no ficheiro
	res=fwrite(&alunos[0], sizeof(ALUNO), 10, fp);
	printf("Escreveu %ld registos\n", res);	
	
	//Fechar o ficheiro
	fclose(fp);
		
	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES

