//  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.

#include <stdio.h>;

int main () {
    int num, quad;

    printf("Introduza um nu'mero diferente de 0 para eu lhe indicar o seu quadrado: ");
    scanf("%i", &num);
    quad=num*num;

    while (num!=0){
        printf("O nu'mero e' %i e o seu quadrado e' %i\nInsira um nu'mero: ", num, quad);
        scanf("%i", &num);
        quad=num*num;
    }
    return 0;
}