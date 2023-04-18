#include <stdio.h>
#include <stdlib.h>

int ex4(){
    int num, i = 0, *numeros, soma = 0;

    printf("Insira o nu'mero de nu'meros: ");
    scanf("%i", &num);

    numeros = (int *) calloc(num, sizeof(int));
    if (numeros == NULL) { // verificar se tem memória suficiente
        printf ("Ocorreu um erro ao reservar memória!\n");
        return (-1);
    }

    do{
        printf("Insira o %io nu'mero: ", i+1);
        scanf("%i", &numeros[i]);
        soma += numeros[i];
        i++;
    } while(i < num);

    for(i = num-1; i >= 0; i--){
            printf("%i, ", numeros[i]);
    }
    printf("\b\b \n");

    free(numeros);
}