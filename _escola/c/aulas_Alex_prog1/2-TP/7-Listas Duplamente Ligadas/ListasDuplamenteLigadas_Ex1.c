#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
	int num;
	char nome[100];
	float nota;
}INFO;

typedef struct elem{
	INFO info;
	struct elem *seguinte;
	struct elem *anterior;
}ELEM;

//Calcular Media dos Alunos
float calMedia(ELEM *inilista){
	ELEM *aux=NULL;
	float media=0, soma=0;
	int count=0;
	
	for(aux=inilista; aux!=NULL; aux=aux->seguinte){
		soma+=(*aux).info.nota;
		count++;
	}
	media = soma/count;
	
	return media;
}

void melhorAluno(ELEM *inilista){
	ELEM *aux=NULL;
	
	float maior=0;
	char aluno[100];
	
	if(inilista==NULL){
		printf("Lista vazia\n");
		return;
	}
	
	for(aux=inilista; aux!=NULL; aux=aux->seguinte){
		if(aux->info.nota > maior){
			maior=aux->info.nota;
		}
	}
	
	printf("Nota mais alta= %.2f", maior);

	for(aux=inilista; aux!=NULL; aux=aux->seguinte){
		if(aux->info.nota == maior){
			printf("%i %s\n", aux->info.num, aux->info.nota);
		}
	}
}

//remover do inicio da lista
int removerListaIni(ELEM **inilista, ELEM **fimlista){
	ELEM *aux=NULL;
		
	if(*inilista==NULL){
			printf("Lista vazia!!\n");
	}
	aux=*inilista;	
	if(aux->seguinte==NULL){
		*inilista=NULL;
		*fimlista=NULL;
	}else{
		aux->seguinte->anterior=NULL;
		*inilista=aux->seguinte;
	}
	free(aux);
	return 0;
}

//remover do fim da lista
int removerListaFim(ELEM **inilista, ELEM **fimlista){
	ELEM *aux=NULL;
		
	if(*inilista==NULL){
			printf("Lista vazia!!\n");
	}
	aux=*fimlista;	
	if(aux->anterior==NULL){
		*inilista=NULL;
		*fimlista=NULL;
	}else{
		aux->anterior->seguinte=NULL;
		*fimlista=aux->anterior;
	}
	free(aux);
	return 0;
}

//Insere a partir do inicio
int inserirListaIni(ELEM **inilista, ELEM **fimlista, INFO info){
	ELEM *novo=NULL;
	
	novo=(ELEM *)calloc(1, sizeof(ELEM));
	if(novo==NULL){
		printf("Out of memory\n");
		return -1;
	}
	
	novo->info=info;
	novo->seguinte=NULL;
	novo->anterior=NULL;
		
		if(*inilista==NULL){ //verificar se 1º elem da lista está vazio
			*inilista=novo;
			*fimlista=novo;
		}else{
			novo->seguinte=*inilista;
			(*inilista)->anterior=novo;
			*inilista=novo;
		}
	return 0;
}

//Insere a partir do fim
int inserirListaFim(ELEM **inilista, ELEM **fimlista, INFO info){
	ELEM *novo=NULL;
	
	novo=(ELEM *)calloc(1, sizeof(ELEM));
	if(novo==NULL){
		printf("Out of memory\n");
		return -1;
	}
	
	novo->info=info;
	novo->seguinte=NULL;
	novo->anterior=NULL;
		
		if(*inilista==NULL){ //verificar se ultimo elem da lista está vazio
			*inilista=novo;
			*fimlista=novo;
		}else{
			novo->anterior=*fimlista;
			(*fimlista)->seguinte=novo;
			*fimlista=novo;
		}
	return 0;
}

//Imprime a partir do inicio
void imprimeListaIni(ELEM *inilista){
	ELEM *aux=NULL;
	
	if(inilista==NULL){
		printf("Lista vazia!!\n");
	}
	for(aux=inilista; aux!=NULL; aux=aux->seguinte){
		printf("%i %s %f\n", aux->info.num, aux->info.nome, aux->info.nota);
	}
}

//Imprime a partir do fim
void imprimeListaFim(ELEM *fimlista){
	ELEM *aux=NULL;
	
	if(fimlista==NULL){
		printf("Lista vazia!!\n");
	}
	for(aux=fimlista; aux!=NULL; aux=aux->anterior){
		printf("%i %s %f\n", aux->info.num, aux->info.nome, aux->info.nota);
	}
}

int main(){
	
	ELEM *inilista=NULL, *fimlista=NULL;
	
	return 0;
}
















