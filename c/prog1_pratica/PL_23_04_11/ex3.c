#include <stdlib.h>
#include <stdio.h>

int ex3(){
    int valor, tam = 1, *vector, i, soma = 0;
    // memoria dinamica com realloc
    // do while ate inserir nr 0
    // guarda valor em valor
    // free

    // TODO
    do{
        printf("Insira o valor (0 - Sair): ");
        scanf("&i", &valor);
        if(valor != 0){
            //realocar memoria com realloc
            vector = (int *) realloc(vector, ++tam);
            vector[tam-1] = valor;
            soma += valor;
        }
    }while(valor != 0);

    printf("Soma: %i", soma);
    free(vector);
    return 0;
}