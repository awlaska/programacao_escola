//
//  main.c
//  fibonacciRecursivo
//
//  Created by Pedro Coutinho on 28/02/2019.
//  Copyright © 2019 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>

unsigned int fibonacci_repetitivo(unsigned int n)
{
    unsigned int i, anterior, atual, proximo;
    for(anterior=1,atual=1,proximo=1,i=3; i<=n; i++)
    {
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }
    return proximo;
}

unsigned int fibonacci_recursivo(unsigned int n)
{
    if (n<=2) return 1;                                          //condição de paragem
    return fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2); //invocação recursiva
}

int main(int argc, const char * argv[])
{
    unsigned int f, frep, frec;
    
    f = 10;
    frep = fibonacci_repetitivo(f);
    printf("Fibonacci Repetitivo de %u = %u\n", f, frep);
    frec = fibonacci_recursivo(f);
    printf("Fibonacci Recursivo de %u = %u\n", f, frec);
    return 0;
}

