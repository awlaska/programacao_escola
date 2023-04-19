#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int inserirColaborador(ELEM **iniLista, COL info){
    ELEM *aux = NULL, *novo = NULL;

    novo = (ELEM*) malloc(sizeof(ELEM));

    if(novo == NULL){
        printf("ERRO ao reservar memória!\n");
        return -1;
    }

    novo->info = info;
    novo->seguinte = NULL;

    if(*iniLista == NULL){
        *iniLista = novo;
    } else{
        aux = *iniLista;
        while(aux != NULL){
            if(aux->info.numero == info.numero){
                return 1;
            }
            if(aux->info.NIF == info.NIF){
                return 2;
            }
            aux = aux->seguinte;
        }
        aux->seguinte = novo;
    }
    return 0;
}

void listarColaboradores(ELEM *iniLista){
    ELEM *aux = NULL;
    if(iniLista == NULL){
        printf("Lista vazia!");
        return;
    }
    aux = iniLista;

    printf("%-12s%-6s%-14s%-16s%-15s", "Nome", "Numero", "NIF", "Data nasc.", "Salario");
    while(aux != NULL){
        // falta o resto dos dados
        printf("%-12s%-6i%-14li%-16s%15.2f\n",
               aux->info.nome,
               aux->info.numero,
               aux->info.NIF,
               aux->info.dt_nascimento,
               aux->info.salario);
        aux = aux->seguinte;
    }
}