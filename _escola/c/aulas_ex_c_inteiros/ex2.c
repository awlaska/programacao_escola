// Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.

#include <stdio.h>

int main(){
    int num = 0, soma = 1;

    printf("Insira um n�mero inteiro e eu calculo a soma desses n�meros: ");
    scanf("%i",&num);

    while (num != 0)
    {
        printf("Insira um n�mero inteiro e eu calculo a soma desses n�meros: ");
        scanf("%i",&num);

        soma = num + soma;
    }
    
    printf("A soma de todos os n�meros �: %i", soma);
}
