//
//  main.c
//  fatorialRecursivo
//
//  Created by Pedro Coutinho on 28/02/2019.
//  Copyright © 2019 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>

unsigned int fatorial_repetitivo(unsigned int n)
{
    unsigned int i, fat;
    for(fat=1,i=2; i<=n; i++)
        fat *= i;
    return fat;
}

unsigned int fatorial_recursivo(unsigned int n)
{
    if (n==0) return 1;                 //condição de paragem
    return n * fatorial_recursivo(n-1); //invocação recursiva
}


int main(int argc, const char * argv[]) {
    unsigned int f, frep, frec;
    
    f=5;
    frep = fatorial_repetitivo(f);
    printf("Fatorial Repetitivo: %u! = %u\n", f, frep);
    frec = fatorial_recursivo(f);
    printf("Fatorial Recursivo: %u! = %u\n", f, frec);
}
