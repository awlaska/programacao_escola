//
//  main.c
//  procuraRecursiva
//
//  Created by Pedro Coutinho on 07/03/2019.
//  Copyright © 2019 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>

/*
 Versão 1, menos otimizada pois realiza mais uma chamada recursiva que a outra versão.
 Nota: primeiro precisa de saber se foi além do final do array (posição dim, fora do array). Só depois verifica se o x a procurar está na posição em causa (dada por início).
 */
int procura_recursiva_v1(int a[],int dim, int x, int inicio)
{
    if (inicio >= dim) return -1;
    if (a[inicio]==x) return inicio;
    return procura_recursiva_v1(a,dim,x,inicio+1);
}

/*
 Versão 2, mais otimizada pois realiza menos uma chamada recursiva que a outra versão.
 Nota: primeiro verifica se o x a procurar está na posição em causa (dada por início). Depois, caso não x não esteja nessa posição, é que verifica se está na última posição do array (posição dim-1, última do array)
 */
int procura_recursiva_v2(int a[],int dim, int x, int inicio)
{
    if (a[inicio]==x) return inicio;
    if (inicio >= dim-1) return -1;
    return procura_recursiva_v2(a,dim,x,inicio+1);
}

int main(int argc, const char * argv[]) {
    int dados[4]={10,20,3,5};
    printf("Procura recursiva\n");
    
    printf("(v1) Encontrou em %d\n",procura_recursiva_v1(dados,4,3,0));
    printf("(v1) Encontrou em %d\n",procura_recursiva_v1(dados,4,100,0));
    
    printf("(v2) Encontrou em %d\n",procura_recursiva_v2(dados,4,3,0));
    printf("(v2) Encontrou em %d\n",procura_recursiva_v2(dados,4,100,0));
    return 0;
}
