//
//  main.c
//  grafos
//
//  Created by Pedro Coutinho on 03/06/2020.
//  Copyright © 2020 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NVERTICES    6
#define OK           0
#define NOK          -1
#define ERROR_MEMORY -1
#define ERROR_FILE   -1

#define ERROR_NULL   NULL

#define FICHEIRO_BIN "dados.bin"

typedef struct {
    int id;
    char nome[50];
} VERTICE;

typedef struct {
    int distancia;
    float preco;
    int estado;
} ARESTA;

typedef struct nodoaresta{
    VERTICE *vertice;
    ARESTA  *aresta;
    struct nodoaresta *next;
} NODOARESTA;

typedef struct nodovertice{
    VERTICE *vertice;
    NODOARESTA *arestas;
    int numeroArestas;  //util para a gravação de ficheiros, por exemplo
    struct nodovertice *next;
} NODOVERTICE;

typedef NODOVERTICE* GRAFO;  //variável do tipo GRAFO é um apontador para NODOVERTICE


void imprimeVertice(VERTICE *vertice)
{
//    printf("ID:\t%d\n",vertice->id);
//    printf("NOME:\t%s\n",vertice->nome);
    printf("ID:%d\tNome:%s\n",vertice->id,vertice->nome);
}

void imprimeAresta(ARESTA *aresta)
{
//    printf("Distância:\t%d\n",aresta->distancia);
//    printf("Preço:\t%f\n",aresta->preco);
//    printf("Estado:\t%d\n",aresta->estado);
    printf("Distância:%d\tPreço:%.2f\tEstado:%d\n",aresta->distancia,aresta->preco,aresta->estado);
}

void imprimeArestas(NODOARESTA *listaArestas)
{
    NODOARESTA *aux=NULL;
    printf("Lista arestas:\n");
    for (aux=listaArestas;aux!=NULL;aux=aux->next){
        printf("******\n");
        imprimeVertice(aux->vertice);
        imprimeAresta(aux->aresta);
        printf("******\n");
    }
}

void imprimeVertices(NODOVERTICE *listaVertices)
{
    NODOVERTICE *aux=NULL;
    printf("Lista vértices:\n");
    for (aux=listaVertices;aux!=NULL;aux=aux->next){
        printf("_________________________________________\n");
        imprimeVertice(aux->vertice);
        printf("Número arestas: %d\n",aux->numeroArestas);
        imprimeArestas(aux->arestas);
        printf("_________________________________________\n\n");

    }
    printf("\n");
}

void imprimeGrafo(GRAFO grafo){
    imprimeVertices(grafo);
}

NODOVERTICE *inserirVertice(NODOVERTICE **aptListaVertices, VERTICE *vertice)
{
    NODOVERTICE *novoNodo=NULL;
    if ((novoNodo=(NODOVERTICE *)malloc(sizeof(NODOVERTICE)))){
        novoNodo->vertice=vertice;
        novoNodo->numeroArestas=0;
        novoNodo->arestas=NULL;
    
        novoNodo->next=*aptListaVertices;
        *aptListaVertices=novoNodo;
    }
    return novoNodo;
}

NODOARESTA *inserirAresta(NODOARESTA **aptListaArestas, VERTICE *vertice, ARESTA *aresta)
{
    NODOARESTA *novoNodo=NULL;
    if ((novoNodo=(NODOARESTA *)malloc(sizeof(NODOARESTA)))){
        novoNodo->vertice = vertice;
        novoNodo->aresta = aresta;
    
        novoNodo->next=*aptListaArestas;
        *aptListaArestas=novoNodo;
    }
    return novoNodo;
}

NODOVERTICE *procuraVertice(NODOVERTICE *listaVertices, VERTICE *vertice)
{
    NODOVERTICE *aux=listaVertices;
    while(aux!=NULL && aux->vertice->id!=vertice->id){
        aux = aux->next;
    }
    return aux;
}

int inserirArestaNoVertice(NODOVERTICE *listaVertices, VERTICE *verticeOrigem, VERTICE *verticeDestino, ARESTA *aresta)
{
    NODOVERTICE *auxNodoVertice;  // tem o valor da procura acima
    int estado = NOK;
    
    if((auxNodoVertice=procuraVertice(listaVertices,verticeOrigem))){
        if((inserirAresta(&(auxNodoVertice->arestas),verticeDestino,aresta))!=NULL){
            (auxNodoVertice->numeroArestas)++;
            estado = OK;
        }
    }
    return estado;
}

long carregarVertice(VERTICE *vertice, FILE *fp){
    return fread(vertice,sizeof(VERTICE),1,fp);
}

long carregarAresta(ARESTA *aresta, FILE *fp){
    return fread(aresta,sizeof(ARESTA),1,fp);
}

void carregarArestasNoVertice(NODOVERTICE *nodoVertice, FILE *fp){
    VERTICE *auxVertice=NULL;
    ARESTA *auxAresta=NULL;
    
    int i;
    fread(&(nodoVertice->numeroArestas),sizeof(int),1,fp);
    for(i=nodoVertice->numeroArestas;i>0;i--){
        auxVertice = (VERTICE *)malloc(sizeof(VERTICE));
        carregarVertice(auxVertice,fp);
        auxAresta = (ARESTA *)malloc(sizeof(ARESTA));
        carregarAresta(auxAresta,fp);
        inserirAresta(&nodoVertice->arestas, auxVertice, auxAresta);
    }
}

int carregarVertices(NODOVERTICE **aptListaVertices, FILE *fp){
    NODOVERTICE *nodoVertice;
    VERTICE *vertice;
    long resultado;

    do{
        if (!(vertice = (VERTICE *)malloc(sizeof(VERTICE)))){
            return ERROR_MEMORY;
        }
        if((resultado=carregarVertice(vertice,fp))){
            nodoVertice=inserirVertice(aptListaVertices,vertice);
            carregarArestasNoVertice(nodoVertice,fp);
        }else{
            free(vertice);
        }
    } while(resultado);
    return OK;
}

int carregarGrafo(GRAFO *apt_grafo, char *nomeFicheiro){

    FILE *fp;

    if(!(fp=fopen(nomeFicheiro,"rb"))) return ERROR_FILE;
    carregarVertices(apt_grafo,fp);
    fclose(fp);
    return OK;
}

long guardarVertice(VERTICE *vertice, FILE *fp){
    return fwrite(vertice,sizeof(VERTICE),1,fp);
}

long guardarAresta(ARESTA *aresta, FILE *fp){
    return fwrite(aresta,sizeof(ARESTA),1,fp);
}

void guardarArestas(NODOARESTA *listaArestas, FILE *fp){
    NODOARESTA *aux = listaArestas;

    while(aux){
        guardarVertice(aux->vertice,fp);
        guardarAresta(aux->aresta,fp);
        aux=aux->next;
    }
}

void guardarVertices(NODOVERTICE *listaVertices, FILE *fp){
    NODOVERTICE *aux=listaVertices;

    while(aux){
        guardarVertice(aux->vertice,fp);
        fwrite(&(aux->numeroArestas),sizeof(int),1,fp);
        guardarArestas(aux->arestas,fp);
        aux=aux->next;
    }
}

int guardarGrafo(GRAFO apt_grafo, char *nomeFicheiro){
    FILE *fp;

    if(!(fp=fopen(nomeFicheiro,"wb"))) return ERROR_FILE;
    guardarVertices(apt_grafo,fp);
    fclose(fp);
    return OK;
}

//Estratégia de gravação
    // percorrer lista vertical
        //guardar o vertice (struct, dados)
        //número de Arestas
        // percorrer lista horizontal
            //guardar vertice (struct, dados)
            //guardar aresta  (struct, dados)
//Exemplo:
//    1,Braga
//        n:1
//        2,Viana do Castelo
//        50,6.35,7
//    2 : Viana do Castelo
//        n:3
//        2: Viana do Castelo
//        0, 0, 10
//        4: Porto
//        70, 10.25, 8
//        5: Caminha
//        30, 0, 9
//    3: Lisboa
//        n:0
//    4:...

void criarGrafoDemo(GRAFO *apt_grafo){
    
    VERTICE *aptV1 = (VERTICE *)malloc(sizeof(VERTICE));
    VERTICE *aptV2 = (VERTICE *)malloc(sizeof(VERTICE));
    VERTICE *aptV3 = (VERTICE *)malloc(sizeof(VERTICE));
    ARESTA *aptA1 = (ARESTA *)malloc(sizeof(ARESTA));
    ARESTA *aptA2 = (ARESTA *)malloc(sizeof(ARESTA));
    ARESTA *aptA3 = (ARESTA *)malloc(sizeof(ARESTA));
    
    aptV1->id = 1;
    strcpy(aptV1->nome,"Braga");
    aptV2->id = 2;
    strcpy(aptV2->nome,"Viana do Castelo");
    aptV3->id = 3;
    strcpy(aptV3->nome,"Porto");

    aptA1->distancia = 50;
    aptA1->preco = 10.5;
    aptA1->estado = 5;
    aptA2->distancia = 0;
    aptA2->preco = 0.0;
    aptA2->estado = 7;
    aptA3->distancia = 70;
    aptA3->preco = 15.0;
    aptA3->estado = 2;
    
    inserirVertice(apt_grafo,aptV1);
    inserirVertice(apt_grafo,aptV2);
    inserirVertice(apt_grafo,aptV3);
    inserirArestaNoVertice(*apt_grafo,aptV1,aptV2,aptA1);
    inserirArestaNoVertice(*apt_grafo,aptV2,aptV2,aptA2);
    inserirArestaNoVertice(*apt_grafo,aptV2,aptV3,aptA3);
}

void menu(){
    printf("1-Criar Grafo Demo\n");
    printf("2-Imprimir Grafo\n");
    printf("3-Guardar em ficheiro\n");
    printf("4-Carregar de ficheiro\n");
    printf("0-Sair\n");
}

int main(int argc, const char * argv[]) {
    int opcao;
    GRAFO grafo = NULL;          // lista de adjacencia com lista ligada de vértices
         
    do{
        menu();
        printf("Opção? ");
        scanf("%d",&opcao);
        switch (opcao) {
            case 1:
                criarGrafoDemo(&grafo);
                break;
            case 2:
                imprimeGrafo(grafo);
                break;
            case 3:
                guardarGrafo(grafo,FICHEIRO_BIN);
                break;
            case 4:
                carregarGrafo(&grafo,FICHEIRO_BIN);
                break;
            default:
                break;
        }
    }while(opcao!=0);
    return 0;
}
