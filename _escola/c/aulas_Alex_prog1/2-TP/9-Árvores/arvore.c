#include "arvore.h"

//recursividade é mais facil de aplicar

//
//VLR->preorder
//--------------------------
void preOrdem(NODO *raiz){
    if (raiz==NULL) return;
    //esquerda, raiz, direita
    printf("%i %s\n", raiz->info.num, raiz->info.nome); //V->raiz
    preOrdem(raiz->esquerda);   //L->esquerda
    preOrdem(raiz->direita);    //R->direita
}

//
//LVR->inorder
//--------------------------
void emOrdem(NODO *raiz){
    if (raiz==NULL) return;
    //raiz, esquerda, direita
    emOrdem(raiz->esquerda);   //L->esquerda
    printf("%i %s\n", raiz->info.num, raiz->info.nome); //V->raiz
    emOrdem(raiz->direita);    //R->direita
}

//
//LRV->postorder
//--------------------------
void posOrdem(NODO *raiz){
    if (raiz==NULL) return;
    //esquerda, direita, raiz
    posOrdem(raiz->esquerda);   //L->esquerda
    posOrdem(raiz->direita);    //R->direita
    printf("%i %s\n", raiz->info.num, raiz->info.nome); //V->raiz
}

//
//reservar espaço em memória
//--------------------------
NODO *criaElem(INFO info){
    NODO *novo=NULL;
    novo=(NODO *)calloc(1, sizeof(NODO));
    if(novo==NULL){
        printf("Out of memory!!\n");
    }else{
        novo->info=info;
        novo->direita=NULL;
        novo->esquerda=NULL;
    }
    return novo;
}

//
//Iserir valor numa arvore binaria de pesquisa
//--------------------------
int insElem(NODO **raiz, INFO info){
    if(*raiz==NULL){
        (*raiz)=criaElem(info);
        return 1;
    }
    if(info.num > (*raiz)->info.num){
        insElem(&(*raiz)->direita, info);
    }else{
        insElem(&(*raiz)->esquerda, info);
    }
    return 0;
}

//
//limpa memória
//--------------------------
void limpaArvore(NODO **raiz){
    if(raiz==NULL) return;
    limpaArvore(&(*raiz)->direita);
    limpaArvore(&(*raiz)->esquerda);
    free(*raiz);
}

//
//só funciona se for binária de pesquisa
//existe um num --> existe - 1 / não existe -0
//--------------------------
int existeElem(NODO *raiz, int num){
    if(raiz==NULL){
        return 0;
    }
    if(raiz->info.num == num){
        //printf("%i %s\n", raiz->info.num, raiz->info.nome);
        return 1;
    }    
    if(raiz->info.num > num){
        return existeElem(raiz->esquerda, num);
    }else{
        return existeElem(raiz->direita, num);
    }   
}

//
//calcular tamanho da árvore
//--------------------------
int getSize(NODO *raiz){
    if(raiz==NULL) return 0;
    return (1 + getSize(raiz->direita) + getSize(raiz->esquerda));
}

//
//maior valor
//--------------------------
int getMaior(NODO *raiz){
    if(raiz==NULL) return;
    if(raiz->direita==NULL){
        printf("%i %s\n", raiz->info.num, raiz->info.nome);
        return;
    }
    getMaior(raiz->direita);
}

//
//menor valor
//--------------------------
int getMenor(NODO *raiz){
    if(raiz==NULL) return;
    if(raiz->esquerda==NULL){
        printf("%i %s\n", raiz->info.num, raiz->info.nome);
        return;
    }
    getMenor(raiz->esquerda);
}