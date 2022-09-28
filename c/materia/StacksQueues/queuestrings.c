//
//  main.c
//  QueueStrings
//
//  Created by Pedro Coutinho on 08/05/2020.
//  Copyright © 2020 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAX_ELEMENTOS 3   //3 elementos para atingir QUEUE_FULL (teste)
#define TAM_STR       20

#define OK           0
#define QUEUE_FULL   1
#define QUEUE_EMPTY  2

// ENQUEUE DA STRING elem NA QUEUE queue, DADO O ÍNDICE DE TOPO top
int enqueue(char queue[][TAM_STR], char elem[], int *inicio, int *fim)
{
  if (*inicio == *fim) return QUEUE_FULL;
  strcpy(queue[*fim],elem);
  if (*inicio == MAX_ELEMENTOS) *inicio = *fim;
  *fim = (*fim+1) % MAX_ELEMENTOS;
  return OK;
}

// DEQUEUE DA QUEUE queue, DADO O ÍNDICE DE TOPO top, PARA A STRING elem
int dequeue(char queue[][TAM_STR], char elem[], int *inicio, int *fim)
{
  if (*inicio == MAX_ELEMENTOS) return QUEUE_EMPTY;
  strcpy(elem,queue[*inicio]);
  *inicio = (*inicio+1) % MAX_ELEMENTOS;
  if (*inicio == *fim) *inicio = MAX_ELEMENTOS;
  return OK;
}

void print_queue(char title[], char queue[][TAM_STR], int inicio, int fim)
{
    int i;
    
    printf("___________________________\n");
    printf("Listagem da queue %s:\n",title);
    if(inicio == MAX_ELEMENTOS) printf("Vazio\n");
    else
    {
        i=inicio;
        do{
            printf("[%d]\t->\t%s\n", i, queue[i]);
            i=(i+1)%MAX_ELEMENTOS;
        } while(i!=fim);
    }
    printf("---------------------------\n");
}


int main(int argc, const char * argv[]) {
    
    //Queue listacompras
    char listacompras[MAX_ELEMENTOS][TAM_STR];
    int inicio_listacompras,fim_listacompras;
    //Queue todo
    char todo[MAX_ELEMENTOS][TAM_STR];
    int inicio_todo,fim_todo;
    
    char mensagem[TAM_STR];
    int res;
    
    
    //Queue listacompras vazia
    inicio_listacompras = MAX_ELEMENTOS;  //sinaliza que a queue COMPRAS está vazia
    fim_listacompras = 0;

    //exemplo sobre queue de COMPRAS:
    //escrever a queue COMPRAS: vai estar vazia
    print_queue("COMPRAS (início)",listacompras,inicio_listacompras,fim_listacompras);

    //inserir elementos na queue COMPRAS
    res=enqueue(listacompras,"Máscaras",&inicio_listacompras,&fim_listacompras);
    if(res == QUEUE_FULL) printf("Queue COMPRAS cheia\n");
    print_queue("COMPRAS (depois de ->\"Máscaras\")",listacompras,inicio_listacompras,fim_listacompras);
    //sem recurso à variável "res"
    if(enqueue(listacompras,"Luvas",&inicio_listacompras,&fim_listacompras) == QUEUE_FULL) printf("Queue COMPRAS cheia\n");
    print_queue("COMPRAS (depois de ->\"Luvas\")",listacompras,inicio_listacompras,fim_listacompras);
    if(enqueue(listacompras,"Álcool em gel",&inicio_listacompras,&fim_listacompras) == QUEUE_FULL) printf("Queue COMPRAS cheia\n");
    print_queue("COMPRAS (depois de ->\"Álcool em gel\")",listacompras,inicio_listacompras,fim_listacompras);
    
    //"Paracetamol" não vai ser inserido com MAX_ELEMENTOS 3
    if(enqueue(listacompras,"Paracetamol",&inicio_listacompras,&fim_listacompras) == QUEUE_FULL) printf("Queue COMPRAS cheia\n");

    //estado atual da queue COMPRAS, com os elementos inseridos acima
    print_queue("COMPRAS (depois de tentar ->\"Paracetamol\")",listacompras,inicio_listacompras,fim_listacompras);
    
    //retirar elementos na queue COMPRAS
    if(dequeue(listacompras,mensagem,&inicio_listacompras,&fim_listacompras) == QUEUE_EMPTY) printf("Queue COMPRAS vazia\n");
    else printf("DEQUEUE COMPRAS: %s\n",mensagem);
    
    //estado atual da queue COMPRAS, sem o elemento retirado acima
    print_queue("COMPRAS (depois de <-\"Máscaras\")",listacompras,inicio_listacompras,fim_listacompras);
    
    //"Paracetamol" já vai ser inserido com MAX_ELEMENTOS 3 pois retirado um elemento da queue
    if(enqueue(listacompras,"Paracetamol",&inicio_listacompras,&fim_listacompras) == QUEUE_FULL) printf("Queue COMPRAS cheia\n");
    //notar os índices "circulares" (chega ao fim, volta ao início)
    print_queue("COMPRAS (depois de ->\"Paracetamol\")",listacompras,inicio_listacompras,fim_listacompras);
    
    //retirar elementos na queue COMPRAS até queue estar vazia
    while(dequeue(listacompras,mensagem,&inicio_listacompras,&fim_listacompras)!=QUEUE_EMPTY)
    {
        printf("DEQUEUE COMPRAS: %s\n",mensagem);
    }
    
    //queue COMPRAS tem que estar vazia
    if(dequeue(listacompras,mensagem,&inicio_listacompras,&fim_listacompras) == QUEUE_EMPTY) printf("Queue COMPRAS vazia\n");
    else printf("DEQUEUE COMPRAS: %s\n",mensagem);
    
    //estado atual da queue COMPRAS (vazia)
    print_queue("COMPRAS (depois de todos os dequeues)",listacompras,inicio_listacompras,fim_listacompras);

    //Queue todo vazia
    inicio_todo = MAX_ELEMENTOS;  //sinaliza que a queue TODO está vazia
    fim_todo = 0;
    
    //estado atual da queue TODO (vazia)
    print_queue("TODO (início)",todo,inicio_todo,fim_todo);
    
    //inserção na queue TODO
    if(enqueue(todo,"Ir às compras",&inicio_todo,&fim_todo) == QUEUE_FULL) printf("Queue TODO cheia\n");
    
    //estado atual da queue TODO
    print_queue("TODO (depois de ->\"Ir às compras\")",todo,inicio_todo,fim_todo);

    //retirar elemento na queue COMPRAS
    if(dequeue(todo,mensagem,&inicio_todo,&fim_todo) == QUEUE_EMPTY) printf("Queue TODO vazia\n");
    else printf("DEQUEUE TODO: %s\n",mensagem);
    
    //estado atual da queue TODO (vazia)
    print_queue("TODO (depois de <-\"Ir às compras\")",todo,inicio_todo,fim_todo);
    
    //... inserir aqui mais operações sobre queues TODO e COMPRAS
    
    return 0;
}
