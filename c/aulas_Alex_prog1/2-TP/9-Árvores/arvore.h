#ifndef arvore_h
#define arvore_h

#include <stdio.h>
#include <stdlib.h>

//struct para dados
typedef struct pessoa{
    int num;
    char nome[100];
}INFO;

//struct ordem árvore
typedef struct elem
{
    INFO info;
    struct elem *direita;
    struct elem *esquerda;
}NODO;

void preordem(NODO *raiz);  //VLR->preorder
void emOrdem(NODO *raiz);   //LVR->inorder
void posOrdem(NODO *raiz);  //LRV->postorder

NODO *criaELEM(INFO info);
int InsElem(NODO **raiz, INFO info);
void limpaArvore(NODO **raiz);

int existeElem(NODO *raiz, int num);
int getSize(NODO *raiz);
int getMaior(NODO *raiz);
int getMenor(NODO *raiz);

#endif