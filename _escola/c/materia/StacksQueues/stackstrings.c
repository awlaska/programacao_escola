//
//  main.c
//  StackStrings
//
//  Created by Pedro Coutinho on 08/05/2020.
//  Copyright © 2020 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAX_ELEMENTOS 10
#define TAM_STR       20

#define OK           0
#define STACK_FULL   1
#define STACK_EMPTY  2

// PUSH DA STRING elem NA STACK stack, DADO O ÍNDICE DE TOPO top
int push(char stack[][TAM_STR], char elem[], int *top)
{
  if ((*top) >= MAX_ELEMENTOS) return STACK_FULL;
  strcpy(stack[(*top)++],elem);
  return OK;
}

// POP DA STACK stack, DADO O ÍNDICE DE TOPO top, PARA A STRING elem
int pop(char stack[][TAM_STR], char elem[], int *top)
{
  if ((*top) <= 0) return STACK_EMPTY;
  strcpy(elem,stack[--(*top)]);
  return OK;
}

void print_stack(char title[], char stack[][TAM_STR], int top)
{
    int i;
    
    printf("___________________________\n");
    printf("Listagem da stack %s:\n",title);
    for(i=top-1;i>=0;i--)
    {
        printf("[%d]\t->\t%s\n", i, stack[i]);
    }
    printf("---------------------------\n");
}


int main(int argc, const char * argv[]) {
    
    //Stack listacompras
    char listacompras[MAX_ELEMENTOS][TAM_STR];
    int top_listacompras;
    //Stack todo
    char todo[MAX_ELEMENTOS][TAM_STR];
    int top_todo;
    
    char mensagem[TAM_STR];
    int res;
    
    
    //Stack listacompras vazia
    top_listacompras = 0;

    //exemplo sobre stack de COMPRAS:
    //escrever a stack COMPRAS: vai estar vazia
    print_stack("COMPRAS",listacompras,top_listacompras);

    //inserir elementos na stack COMPRAS
    res=push(listacompras,"Máscaras",&top_listacompras);
    if(res == STACK_FULL) printf("Stack COMPRAS cheia\n");
    //sem recurso à variável "res"
    if(push(listacompras,"Luvas",&top_listacompras) == STACK_FULL) printf("Stack COMPRAS cheia\n");
    if(push(listacompras,"Álcool em gel",&top_listacompras) == STACK_FULL) printf("Stack COMPRAS cheia\n");
    if(push(listacompras,"Paracetamol",&top_listacompras) == STACK_FULL) printf("Stack COMPRAS cheia\n");

    //estado atual da stack COMPRAS, com os elementos inseridos acima
    print_stack("COMPRAS",listacompras,top_listacompras);
    
    //retirar elementos na stack COMPRAS
    if(pop(listacompras,mensagem,&top_listacompras) == STACK_EMPTY) printf("Stack COMPRAS vazia\n");
    else printf("POP COMPRAS: %s\n",mensagem);
    
    //estado atual da stack COMPRAS, sem o elemento retirado acima
    print_stack("COMPRAS",listacompras,top_listacompras);
    
    //retirar elementos na stack COMPRAS até stack estar vazia
    while(pop(listacompras,mensagem,&top_listacompras)!=STACK_EMPTY)
    {
        printf("POP COMPRAS: %s\n",mensagem);
    }
    
    //stack COMPRAS tem que estar vazia
    if(pop(listacompras,mensagem,&top_listacompras) == STACK_EMPTY) printf("Stack COMPRAS vazia\n");
    else printf("POP COMPRAS: %s\n",mensagem);
    
    //estado atual da stack COMPRAS (vazia)
    print_stack("COMPRAS",listacompras,top_listacompras);

    //Stack todo vazia
    top_todo = 0;
    
    //estado atual da stack TODO (vazia)
    print_stack("TODO",todo,top_todo);
    
    //inserção na stack TODO
    if(push(todo,"Ir às compras",&top_todo) == STACK_FULL) printf("Stack TODO cheia\n");
    
    //estado atual da stack TODO
    print_stack("TODO",todo,top_todo);

    //retirar elemento na stack COMPRAS
    if(pop(todo,mensagem,&top_todo) == STACK_EMPTY) printf("Stack TODO vazia\n");
    else printf("POP TODO: %s\n",mensagem);
    
    //estado atual da stack TODO (vazia)
    print_stack("TODO",todo,top_todo);
    
    //... inserir aqui mais operações sobre stacks TODO e COMPRAS
    
    return 0;
}
