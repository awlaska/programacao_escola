#include <stdio.h>
#include <stdlib.h>

int ex2(){
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

    float media = (float) soma / num;

    printf("\nNu'meros inferiores a %.1f: ", media);
    for(i = 0; i < num; i++){
        if(numeros[i] < media) {
            printf("%i, ", numeros[i]);
        }
    }
    printf("\b\b \n");

    free(numeros);
}