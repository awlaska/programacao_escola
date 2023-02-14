#include <stdio.h>
#include <stdlib.h>

int ex1() {
    // Declarar as varia'veis
    float precoFinal = 0.0f, ism = 0.0f, precoBase = 0.0f, iva = 0.0f;

    // Pedir ao utilizador para inserir o valor base
    printf("Insira o valor base: ");
    scanf("%f", &precoBase);

    // Calcular ISM
    if(precoBase < 150000){
        ism = 0.2 * precoBase;
    } else {
        ism = 0.3 * precoBase;
    }

    // Calcular IVA
    iva = precoBase * 0.23;

    // Calcular precoFinal
    precoFinal = precoBase + ism + iva;

    // Apresentar resultado
    printf("\nISM: %.2f euro"
           "\nIVA: %.2f euro"
           "\nPreco final: %.2f euro"
           , ism, iva, precoFinal);

    return EXIT_SUCCESS;
}
