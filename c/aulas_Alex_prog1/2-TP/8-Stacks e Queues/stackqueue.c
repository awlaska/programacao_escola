//
//  main.c
//  stackqueue_listaligada
//
//  Created by Pedro Coutinho on 14/05/2021.
//

#include <stdio.h>
#include <stdlib.h>


#define MAX 3
#define STACK_VAZIA -1
#define STACK_CHEIA -1
#define QUEUE_VAZIA -1
#define QUEUE_CHEIA -1
#define ERRO_DADOS_INVALIDOS -3
#define ERRO_DADOS -2
#define ERRO_MEMORIA -1
#define ERRO_LISTA_VAZIA -1
#define OK 1

typedef char INFO;

typedef struct {
    INFO dados[MAX];
    int topo;
} STACK;

typedef struct elem{
    INFO info;
    struct elem *next;
} ELEMENTO;

typedef struct {
    ELEMENTO *dados;
} STACKLL;

typedef struct {
    INFO dados[MAX];
    int inicio;      //dequeue do início
    int fim;         //enqueue no fim
} QUEUE;

typedef struct {
    ELEMENTO *dados;
} QUEUELL;

typedef struct {
    ELEMENTO *dados_inicio;
    ELEMENTO *dados_fim;
} QUEUELLD;

void escreve_dados(INFO *dados)
{
    printf("----INI DADOS-----\n");
    printf("%c",*dados);
    printf("\n----FIM DADOS-----\n");
}

STACK create()
{
    STACK s;
    s.topo = 0;
    return s;
}

STACKLL createLL()
{
    STACKLL s;
    s.dados=NULL;
    return s;
}

int pop(STACK *s, INFO *dados)
{
    if(s->topo<=0)
    {
        return STACK_VAZIA;
    }
    *dados=s->dados[(s->topo)-1];
    (s->topo)--;
    return OK;
}

int push(STACK *s, INFO *dados)
{
    if((s->topo) >= MAX){
        return STACK_CHEIA;
    }
    s->dados[s->topo]=*dados;
    (s->topo)++;
    return OK;
}

QUEUE create_queue()
{
    QUEUE q;
    q.inicio = MAX;
    q.fim = 0;
    return q;
}

QUEUELL create_queuell()
{
    QUEUELL q;
    q.dados = NULL;
    return q;
}

int enqueue(QUEUE *q, INFO *dados)
{
    if(q->inicio==q->fim) return QUEUE_CHEIA;
    q->dados[q->fim]=*dados;
    if(q->inicio == MAX) q->inicio=q->fim;
    q->fim=(q->fim +1)%MAX; //q->fim=9    9+1=10   10%10=0
    return OK;
}

int dequeue(QUEUE *q, INFO *dados)
{
    if(q->inicio==MAX) return QUEUE_VAZIA;
    *dados=q->dados[q->inicio];
    q->inicio=(q->inicio+1)%MAX; //q->inicio=9    9+1=10   10%10=0
    if(q->inicio==q->fim) q->inicio = MAX;
    return OK;
}



int inserir_lista_ligada_inicio(ELEMENTO **apt_l, INFO *apt_info)
{
    ELEMENTO *novo;

    if(apt_info==NULL) return ERRO_DADOS;

    novo = (ELEMENTO *)malloc(sizeof(ELEMENTO));
    if (novo==NULL) return ERRO_MEMORIA;

    novo->info = *apt_info;
    novo->next = *apt_l;
    *apt_l = novo;
    return OK;
}

int enqueueLL(QUEUELL *q, INFO *dados)
{
    if(inserir_lista_ligada_inicio(&(q->dados),dados)==OK)
    {
        return OK;
    }
    return QUEUE_CHEIA;
}

int remover_lista_ligada_fim(ELEMENTO **apt_l,INFO *info)
{
    ELEMENTO *atual=NULL;
    ELEMENTO *anterior=NULL;
    
    if (*apt_l == NULL)
    {
        return ERRO_LISTA_VAZIA;
    }
    atual = *apt_l;
    if(atual->next==NULL)
    {
        *apt_l=NULL;
    }
    else
    {
        while(atual->next!=NULL)
        {
            anterior=atual;
            atual=atual->next;
        }
        anterior->next=NULL;
    }
    *info = atual->info;
    free(atual);
    return OK;
}

int dequeueLL(QUEUELL *q, INFO *dados)
{
    int resultado;
    resultado = remover_lista_ligada_fim(&(q->dados),dados);
    if(resultado==ERRO_LISTA_VAZIA) return QUEUE_VAZIA;
    return OK;
}


int inserir_lista_ligada_dupla_inicio(ELEMENTO **apt_l_inicio, ELEMENTO **apt_l_fim, INFO *apt_info)
{
    //TODO: inserção no início de uma lista ligada dupla
    return OK;
}

int remover_lista_ligada_dupla_fim(ELEMENTO **apt_l_inicio, ELEMENTO **apt_l_fim, INFO *apt_info)
{
    //TODO: remoção no fim de uma lista ligada dupla
    return OK;
}

int enqueueLLD(QUEUELLD *q, INFO *dados)
{
    if(inserir_lista_ligada_dupla_inicio(&(q->dados_inicio),&(q->dados_fim),dados)==OK)
    {
        return OK;
    }
    return QUEUE_CHEIA;
}

int dequeueLLD(QUEUELLD *q, INFO *dados)
{
    int resultado;
    resultado = remover_lista_ligada_dupla_fim(&(q->dados_inicio),&(q->dados_fim),dados);
    if(resultado==ERRO_LISTA_VAZIA) return QUEUE_VAZIA;
    return OK;
}


ELEMENTO *remover_lista_ligada_inicio(ELEMENTO **apt_l)
{
    ELEMENTO *aux;
    
    aux = *apt_l;
    if(*apt_l != NULL) *apt_l = (*apt_l)->next;
    return aux;
}

int remover_lista_ligada_inicio_v2(ELEMENTO **apt_l,INFO *info)
{
    ELEMENTO *aux;
    
    aux = *apt_l;
    if(*apt_l != NULL)
    {
        *apt_l = (*apt_l)->next;
        *info = aux->info;
        free(aux);
        return OK;
    }
    else
    {
        return ERRO_LISTA_VAZIA;
    }
}


int pushLL(STACKLL *s, INFO *dados)
{
    return inserir_lista_ligada_inicio(&(s->dados),dados);
}

int popLL(STACKLL *s, INFO *dados)
{
    ELEMENTO *aux;
    aux = remover_lista_ligada_inicio(&(s->dados));
    if(aux!=NULL)
    {
        *dados = aux->info;
        free(aux);
        return OK;
    }
    return STACK_VAZIA;
}

int popLL_v2(STACKLL *s, INFO *dados)
{
    int resultado;
    resultado = remover_lista_ligada_inicio_v2(&(s->dados),dados);
    if(resultado==ERRO_LISTA_VAZIA)
    {
        return STACK_VAZIA;
    }
    return OK;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    INFO dados;
    int estado,i;
    
    STACK stack;
    STACKLL stackLL;
    
    QUEUELL queueLL; //uma queue (implementação LL)
    
    QUEUE queue;  // uma queue (implementação ARRAY)
    
    QUEUE queues[10];  // array de 10 queues
    
    for(i=0;i<10;i++){
        queues[i] = create_queue();
    }
    
    //colocar 'a' na primeira queue
    scanf(" %c",&dados);
    if(dados>='a' && dados<='f') i=0;
    else if(dados>='g' && dados<='p') i=1;
    else i=2;
    estado = enqueue(&queues[i],&dados);
    if (estado == OK)
    {
        printf("correu bem enqueue do 'a' na primeira queue\n");
        escreve_dados(&dados); // escrita do 'a'
    }
    else printf("correu mal enqueue do 'a' na primeira queue\n");
    
    
    queueLL = create_queuell();
    
    dados = 'a';
    estado = enqueueLL(&queueLL, &dados);
    if(estado == OK) printf("correu bem\n");
    else printf("correu mal\n");

    
    queue = create_queue();
    
    dados = 'a';
    estado = enqueue(&queue,&dados);
    if (estado == OK)
    {
        printf("correu bem enqueue A\n");
        escreve_dados(&dados); // escrita do 'a'
    }
    else printf("correu mal enqueue A\n");
    
    dados = 'b';
    estado = enqueue(&queue,&dados);
    if (estado == OK)
    {
        printf("correu bem enqueue A\n");
        escreve_dados(&dados); // escrita do 'b'
    }
    else printf("correu mal enqueue A\n");
    
    dados = 'c';
    estado = enqueue(&queue,&dados);
    if (estado == OK)
    {
        printf("correu bem enqueue A\n");
        escreve_dados(&dados); // escrita do 'c'
    }
    else printf("correu mal enqueue A\n");
    
    dados = 'd';
    estado = enqueue(&queue,&dados);
    if (estado == OK)
    {
        printf("correu bem enqueue A\n");
        escreve_dados(&dados); // escrita do 'd'
    }
    else printf("correu mal enqueue A\n");
    
    estado = dequeue(&queue,&dados);
    if (estado == OK)
    {
        printf("correu bem dequeue A\n");
        escreve_dados(&dados); // escrita do 'a'
    }
    else printf("correu mal dequeue A\n");
    
    estado = dequeue(&queue,&dados);
    if (estado == OK)
    {
        printf("correu bem dequeue A\n");
        escreve_dados(&dados); // escrita do 'b'
    }
    else printf("correu mal dequeue A\n");
    
    estado = dequeue(&queue,&dados);
    if (estado == OK)
    {
        printf("correu bem dequeue A\n");
        escreve_dados(&dados); // escrita do 'c'
    }
    else printf("correu mal dequeue A\n");
    
    estado = dequeue(&queue,&dados);
    if (estado == OK)
    {
        printf("correu bem dequeue A\n");
        escreve_dados(&dados); // escrita do 'd'
    }
    else printf("correu mal dequeue A\n");
    
    
    stack = create();
    stackLL = createLL();
    
    dados = 'a';
    estado = push(&stack,&dados);
    if (estado == OK) printf("correu bem push A\n");
    else printf("correu mal push A\n");
    
    
    estado = pushLL(&stackLL,&dados);
    if (estado == OK) printf("correu bem push LL\n");
    else printf("correu mal push LL\n");
    
    dados = 'b';
    estado = push(&stack,&dados);
    if (estado == OK) printf("correu bem push A\n");
    else printf("correu mal push A\n");
    estado = pushLL(&stackLL,&dados);
    if (estado == OK) printf("correu bem push LL\n");
    else printf("correu mal push LL\n");
    
    //pop_old(stack.dados, &(stack.topo));
    estado = pop(&stack,&dados);
    if (estado == OK)
    {
        printf("correu bem pop A\n");
        escreve_dados(&dados);
    }
    else printf("correu mal pop A\n");
    
    estado = popLL_v2(&stackLL,&dados);
    if (estado == OK)
    {
        printf("correu bem pop LL\n");
        escreve_dados(&dados);
    }
    else printf("correu mal pop LL\n");
    
    estado = pop(&stack,&dados);
    if (estado == OK)
    {
        printf("correu bem pop A\n");
        escreve_dados(&dados);
    }
    else printf("correu mal pop A\n");
     
    estado = popLL_v2(&stackLL,&dados);
    if (estado == OK)
    {
        printf("correu bem pop LL\n");
        escreve_dados(&dados);
    }
    else printf("correu mal pop LL\n");
    
    estado = pop(&stack,&dados);
    if (estado == OK)
    {
        printf("correu bem pop A\n");
        escreve_dados(&dados);
    }
    else printf("correu mal pop A\n");
    
    estado = popLL_v2(&stackLL,&dados);
    if (estado == OK)
    {
        printf("correu bem pop LL\n");
        escreve_dados(&dados);
    }
    else printf("correu mal pop LL\n");

    
    
    return 0;
}


//void push_old(char stack[], char car, int *tos)
//{
//    if((*tos) >= MAX){
//        printf("Stack Overflow\n");
//        return;
//    }
//    stack[*tos]=car;
//    (*tos)++;
//}
//
//char pop_old(char *stack, int *tos)
//{
//    char aux='\0';
//    if((*tos)<=0){
//        printf("Stack underflow\n");
//    } else {
//        aux=stack[(*tos)-1];
//        (*tos)--;
//
//    }
//    return aux;
//}

