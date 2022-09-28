#include <stdio.h>
#include <stdlib.h>

#define MAX 150

typedef struct aluno{ // typedef é uma definição de dados
	int num, notaTeste1, notaTeste2, notaTP;
}ALUNO; 

int leDados (ALUNO notas[]){
	
	FILE *fp= NULL; char nomeFile[100];
	int totReg=0, res=0;
	
	printf("Introduza o nome do ficheiro: \n");
	gets(nomeFile);

	fp=fopen(nomeFile, "r");
	
	if(fp==NULL){
	printf("ERRO ao abrir o ficheiro\n");
	return -1;
	}
	
	while (!feof(fp)){
		res=fscanf(fp, "%i; %i; %i; %i", &notas[totReg].num, &notas[totReg].notaTeste1, &notas[totReg].notaTeste2, &notas[totReg].notaTP);
	}
	if(res>0){
		totReg++;
	}
fclose(fp);
printf("Ler %i registos \n", totReg);
}

void printDados (ALUNO notas[], int totReg){
	int i=0;
	printf("Dados: num, teste1, teste2, tp\n");
	for(i=0;i<totReg;i++) {
		printf("%i; %i; %i; %i\n", notas[i].num, notas[i].notaTeste1, notas[i].notaTeste2, notas[i].notaTP);
	}
}

int alunoNotaPositiva(ALUNO notas[], int totReg){
	float notaFinal=0;
	int totalAlunos=0;
	int totalAprovados;
	int i=0;
	
	for(i=0;i<totReg;i++){
		notaFinal=0.25*notas[i].notaTeste1 + 0.25*notas[i].notaTeste2 + 0.5*notas[i].notaTP;
		if(notaFinal>=9.5){
			printf("Aluno num= %i\n", notas[i].num);
			totalAprovados++;
		}
	}
return totalAprovados;
}

void mediaPorAvaliacao(ALUNO notas[], int totReg){
	int i=0;
	int mediaTeste1=0, mediaTeste2=0, mediaTP=0;
	
	for(i=0;i<totReg;i++){
		mediaTeste1=mediaTeste1+notas[i].notaTeste1;
		mediaTeste2=mediaTeste2+notas[i].notaTeste2;
		mediaTP=mediaTP+notas[i].notaTP;
	}
	printf("Media do teste 1: %i\nMedia teste 2: %i\nMedia teste TP: %i", mediaTeste1/totReg, mediaTeste2/totReg, mediaTP/totReg);
}

int notaMaiorTP(ALUNO notas[], int totReg){
	int i, a;
	for(i=0;i<totReg-1;i++){
		printf("Nota maior de TP: %i", notaTP);
		for(notas[i].notaTP>notas[i+1].notaTP){
			a=notas[i].notaTP;
		}
	}notaTP
	for(i=0,i<totReg,notas[i].==a){
		printf("Aluno com o número %i", notas[i].notaTP);
		i++;
	}
}

int main(int argc, char *argv[]) {
	
	ALUNO notas[MAX];
	int totalAlunos=0;
	
	totalAlunos=leDados(notas);
	
	leDados(notas);
	printDados(notas, totalAlunos);
	alunoNotaPositiva(notas, totalAlunos);
	mediaPorAvaliacao(notas, totalAlunos);
	notaMaiorTP(notas, totalAlunos);
	// notaMenorTeste1();
	
return 0;
}
