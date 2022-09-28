// Dado um nu'mero inteiro positivo n, imprimir os n primeiros naturais i'mpares.

#include <stdio.h>

int main () {
    int i = 0;
    int j = 0;

    printf("Introduza o nu'mero de nu'meros i'mpares que quer: ");
    scanf("%i", &i);

    while (j=0, j<i, j++) {
        printf("\n%i\t%i", i, j);
        i++;
        i++;
    }
    return 0;
}
