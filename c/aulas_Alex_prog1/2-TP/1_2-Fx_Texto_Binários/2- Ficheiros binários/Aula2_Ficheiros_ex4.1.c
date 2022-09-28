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

void printDados(ALUNO al[], long tam){
	int i=0;
	for(i = 0; i < tam; i++){
		printf("\nAluno %i|| %s|| %s|| nota= %.2f\n", al[i].num, al[i].nome, al[i].morada, al[i].nota);
	}
}

int main(int argc, const char * argv[]) {
	
    setlocale(LC_ALL, "Portuguese");
    system("COLOR FC");
	
	//Array de estruturas com ficheiros	
	ALUNO alunos[20];
	long res=0;
	
	//Iniciar a vairavel a null
	FILE *fp=NULL;
	
	fp=fopen("alunos.dat", "rb");
	
	//verificar se o ficheiro está aberto
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
		return -1;
	}
	
	//Ler do ficheiro
	res=fread(&alunos[0], sizeof(ALUNO), 20, fp);
	printf("Leu %ld registos", res);
	
	printDados(alunos, 10);
	
	//printf("Long= %ld\n", sizeof(long));
	//Fechar o ficheiro
	fclose(fp);
		
	printf("\n\n");

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES

