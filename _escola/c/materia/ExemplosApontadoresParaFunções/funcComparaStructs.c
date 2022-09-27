//
//  main.c
//  funcComparaStructs
//
//  Created by Pedro Coutinho on 29/04/2020.
//  Copyright © 2020 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

typedef struct
{
    int numero;
    char nome[50];
} ALUNO;

int comparaNumero(ALUNO *a, ALUNO *b)
{
    int c=0;
    
    if(a->numero > b->numero) c=1;
    else if(a->numero < b->numero) c=-1;
    else c=0; //linha desnecessária dada a incialização
    return c;
}

int comparaNome(ALUNO *a, ALUNO *b)
{
    int c=0;
    
    if(strcmp(a->nome,b->nome)>0) c=1;
    else if(strcmp(a->nome,b->nome)<0) c=-1;
    else c=0; //linha desnecessária dada a incialização
    return c;
}

int compara(ALUNO *a, ALUNO *b, int (*c)(ALUNO *, ALUNO *))
{
    return c(a,b);
}

int main(int argc, const char * argv[]) {
    ALUNO x={1,"Rui"},y={2,"Ana"};
    
    printf("Compara número e nome!\n");
    printf("Maior número: %d\n",compara(&x,&y,comparaNumero));
    printf("Maior nome: %d\n",compara(&x,&y,comparaNome));
    return 0;
}
