#include <stdio.h>
#include <stdlib.h>

#define MAX 250

typedef struct part{
	int num;
	char nome[100];
	float valPago;
	char tipo;
	char instituicao[100];
}PARTICIPANTE;

int menu(){
	int opcao=0;
	
	printf("Introduza a opcao: \n");
	printf("1 - Inserir participante\n");
	printf("2 - Listar participantes\n");
	// printf("3 - Listar 1 participante\n");
	// printf("4 - Listar part. de instituicao\n");
	// printf("5 - \n");
	// printf("6 - \n");
	// printf("7 - \n");
	printf("8 - Alterar inf. de participante\n0 - SAIR\n");
	scanf("%i", &opcao);
return opcao;
}

int inserirParticipante(PARTICIPANTE participantes[], int totPartic){
	if(totPartic>=MAX){
		printf("Nao aceite mais participantes\n");
	return 0;
	}
	printf("Int. os dados do participante: \nNome: \n");
	fflush(stdin);
	gets(participantes[totPartic].nome);
	printf("Valor pago: \n");
	scanf("%f", &participantes[totPartic].valPago);
	printf("Tipo: [E]mpresa, [A]luno, [C]onvidado, [O]utro: \n");
	fflush(stdin);
	scanf("%c", &participantes[totPartic].tipo);
	printf("Instituicao: \n");
	fflush(stdin);
	gets(participantes[totPartic].instituicao);
	participantes[totPartic].num=totPartic+1;
return 1;
}


int listaParticipantes(PARTICIPANTE parte[], int total){

	int i=0;

	if(total<=0){
		printf("Nao existem participantes");
		return 0;
	}
	
	for(i=0;i<total;i++){
		printf("%i - %s %.2f %c %s\n", parte[i].num, parte[i].nome, parte[i].valPago, parte[i].tipo, parte[i].instituicao);
	}
}

int gravarDados(PARTICIPANTE partc[], int total){
	FILE *fp=NULL; int res=0;
	fp=fopen("TranfDigital2020.txt", "wb");
	if(fp==NULL){
		printf("ERRO ao abrir o ficheiro\n");
	return -1;
	}
	res=fwrite(&total, sizeof(int), 1, fp);
	printf("Escreve %i valores\n", res);
	res=fwrite(&partc[0], sizeof(PARTICIPANTE), total, fp);
	printf("Escrever %i registos\n", res);
	fclose(fp);
return 0;
}

int leDados(PARTICIPANTE partc[]){
	FILE *fp=NULL;
	int res=0;
	int tot=0, u;
	
	fp=fopen("TranfDados2020.txt", "rb");
	if(fp==NULL){
		printf("Nao abriu o ficheiro\n");
	return 0;
	}
	res=fread(&tot, sizeof(int), 1, fp);
	if(res<=0 || tot<=0) {
		return 0;
	}
	res=fread(&partc[u], sizeof(PARTICIPANTE), tot, fp);
	printf("Ler %i registos", res);
	fclose(fp);
return tot;
}

int main(int argc, char *argv[]) {
	
	PARTICIPANTE participantes[MAX];
	
	int totalPartic=0, opcao=0;
	
	
	
	do{
		opcao=menu();
		switch (opcao){
			case 1: totalPartic += inserirParticipante(participantes, totalPartic);
			break;
			case 2: listaParticipantes(PARTICIPANTE parte[], int total);
			break;
			case 0: printf("SAIR\n");
		  	default: printf("\nopcao ERRADA\n");
		}
	}while(opcao!=0);
	
return 0;
}
