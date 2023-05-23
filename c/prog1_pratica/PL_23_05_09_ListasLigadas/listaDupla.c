#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaDupla.h"
#include "utils.h"

//DONE 1
int inserir(INFO info, ELEMENTO **iniLista, ELEMENTO **fimLista){
    printf("# %i, %s, %s, %s, %.2f\n", info.num, info.nome, info.pais, info.inst, info.valorPago);
    ELEMENTO *novo = NULL;
    novo=(ELEMENTO *)malloc(sizeof(ELEMENTO));
    if (novo == NULL) {
        printf("Out of memory\n");
        return -1;
    }
    novo->info = info;
    novo->anterior = NULL;
    novo->seguinte = NULL;

    if (*fimLista == NULL) {
        *iniLista = novo;
        *fimLista = novo;
    }

    else {
        novo->anterior = *fimLista;
        (*fimLista)->seguinte = novo;
        *fimLista = novo;
    }
    printf("# %i, %s, %s, %s, %.2f\n", novo->info.num, novo->info.nome, novo->info.pais, novo->info.inst, novo->info.valorPago);
    printf("# fim %i", *fimLista->info.num);
    printf("# ini %i", *iniLista->info.num);
    return 0;
}

//DOING 2 - só escreve o ultimo
void listarCresc(ELEMENTO *iniLista){
    ELEMENTO *aux = iniLista;
    while (aux != NULL) {
        printf("%d, %s\n", aux->info.num, aux->info.nome);
        aux = aux->seguinte;
    }
}

//DOING 3
void listarDecresc(ELEMENTO *fimLista){
    ELEMENTO *aux = fimLista;
    while (aux != NULL) {
        printf("%d, %s\n", aux->info.num, aux->info.nome);
        aux = aux->anterior;
    }
}

//TODO 4
void listarPartPais(ELEMENTO *iniLista){
    char pais[50];
    printf("Insira o nome do pai's: ");
    scanf("%[^\n]s", pais);
    ELEMENTO *aux = iniLista;
    while (aux != NULL) {
        if(strcmp(aux->info.pais, pais) == 0){
            printf("%d, %s\n", aux->info.num, aux->info.nome);
        }
        aux = aux->seguinte;
    }
}

////TODO 5
//void somaValPag(){}
//
////TODO 6
//void somaValInst(){}
//
////TODO 7
//void imprimeFichBin(){}
//
////TODO 8
//void imprimeFichTxt(){}
//
////TODO 9
//void alterarValPag(){}
//
////TODO 10
//void totalPart(){}
//
////TODO 11
//void mediaPag(){}
////TODO 12
//void removerPart(){}