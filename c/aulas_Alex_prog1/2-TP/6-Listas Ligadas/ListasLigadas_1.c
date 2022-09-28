#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
	char nome[100];
	char morada[300];
	int num;
}INFO;

typedef struct elem{
	INFO aluno;//info que quero armazenar
	struct	elem *seguinte;//apontador para o seguinte
}ELEM;

int inserirInicio(ELEM **inilista, INFO info){
	ELEM *novo=NULL;
	
	novo=(ELEM *)calloc(1, sizeof(ELEM));
	if(novo==NULL){
		printf("Out of memory\n");
		return -1;
	}
	
	novo->aluno=info;
	novo->seguinte=NULL;
	
	if(*inilista==NULL){
		*inilista=novo;
	}
	else{
		novo->seguinte=*inilista;
		*inilista=novo;
	}
	return 0;
}

int inserirFim(ELEM **inilista, INFO info){
	ELEM *novo=NULL, *aux=NULL;
	
	novo=(ELEM *)calloc(1, sizeof(ELEM));
	if(novo=NULL){
		printf("Out of memory\n");
		return -1;		
	}
	
	novo->aluno=info;
	novo->seguinte=NULL;
	
	if(*inilista==NULL){
		*inilista=novo;
	}
	else{
		while(aux->seguinte!=NULL){
			aux=aux->seguinte;
		}
		aux->seguinte==novo;
	}
	return 0;
}

int removerIni(ELEM **inilista){
	ELEM *aux=NULL;
	
	if(*inilista==NULL){
		printf("Lista vista\n");
		return -1;
	}
	
	aux=*inilista;
	*inilista=aux->seguinte;
	free(aux);
	return 0;
}

int removerFim(ELEM **inilista){
	ELEM *aux=NULL, *ant=NULL;
	
	if(*inilista==NULL){
		printf("Lista vista\n");
		return -1;
	}
	
	aux=*inilista;
	while(aux->seguinte!=NULL){
		ant=aux;
		aux=aux->seguinte;
	}
	if(ant==NULL){
		*inilista=NULL;
	}else{
		ant->seguinte=NULL;
	}
	free(aux);
	return 0;
}

void imprimeLista(ELEM *inilista){
	ELEM *aux=NULL;
	if(inilista==NULL){
		printf("Lista Visitada");
		return;
	}
	for(aux=inilista; aux!=NULL; aux=aux->seguinte){
		printf("%s %s %i\n", aux->aluno.nome, aux->aluno.morada, aux->aluno.num);
	}
}

int contaLista(ELEM *inilista){
	int cont=0;
	ELEM *aux=NULL;
	
	for(aux=inilista; aux!=NULL; aux=aux->seguinte){
		cont++;
	}
	
	return cont;	
}

int contaListaRec(ELEM *inilista){
	int cont=0;
	if(inilista==NULL){return 0;}
	return (1+contaListaRec(inilista->seguinte));
}

int verificarAluno(ELEM *inilista, char nome[]){
	ELEM *aux=NULL;
	aux=inilista;
	
	while(aux!=NULL){
		if(strcmp(aux->aluno.nome, nome)==0){
			return 1;
		}
		aux=aux->seguinte;
	}
	return 0;
}

void limpaLista(ELEM **inilista){
	ELEM*proximo=NULL, *aux=NULL;
	aux=*inilista;
	while(aux!=NULL){
		proximo=aux;
		free(aux);
		aux=proximo;
	}
}

int main(){
	
	ELEM *inilista=NULL;
			
	return 0;
}


