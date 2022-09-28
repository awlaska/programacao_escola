//
//  main.c
//  somaRecursiva
//
//  Created by Pedro Coutinho on 11/03/2019.
//  Copyright © 2019 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>

/*
 Versão 1, menos otimizada pois realiza mais uma chamada recursiva que a outra versão.
 Nota: primeiro verfica se chegou ao final do array, devolvendo 0. Senão invoca a soma recursiva.
 */
int soma_recursiva_v1(int a[],int dim, int inicio)
{
    if (inicio >= dim) return 0;
    return a[inicio]+soma_recursiva_v1(a,dim,inicio+1);
}

/*
 Versão 2, mais otimizada pois realiza menos uma chamada recursiva que a outra versão.
 Nota: primeiro verifica se está na última posição do array (posição dim-1, última do array) e devolve esse valor. Senão invoca a soma recursiva.
 */
int soma_recursiva_v2(int a[],int dim, int inicio)
{
    if (inicio >= dim-1) return a[inicio];
    return a[inicio]+soma_recursiva_v2(a,dim,inicio+1);
}

int main(int argc, const char * argv[]) {
    int dados[4]={10,20,3,5};
    printf("Procura recursiva\n");
    
    printf("Soma (v1) = %d\n",soma_recursiva_v1(dados,4,0));
    
    printf("Soma (v2) = %d\n",soma_recursiva_v2(dados,4,0));
    return 0;
}
