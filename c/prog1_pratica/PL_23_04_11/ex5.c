#include <stdio.h>
#include <stdlib.h>

// argc = agrument count
// argv = string que metemos lá
int main(int argc, char* argv[]){
    int n, i, *nums;
    FILE *fp;

    if(argc != 2){
        printf("Sintaxe: %s <nome-do-ficheiro>\n", argv[0]);
        return -1;
    }

    // abrir ficheiro
    fp = fopen(argv[1], "r");
    if(fp == NULL){
        printf("ERRO ao abrir o ficheiro!");
        return -1;
    }

    // ler nr de linhas do ficheiro
    fscanf(fp, "%d", &n);

    // alocar memoria para o vetor de numeros
    nums = (int *) calloc(n, sizeof(int));
    if(nums == NULL){
        printf("Nao foi possivel alocar a memo'ria!");
        return -1;
    }

    // ler o n numeros do ficheiro
    for(i = 0; i < n; i++){
        fscanf(fp, "%d", &nums[i]);
    }

    // imprimir os nrs inferiores ou iguais ao ultimo nr introduzido (n-1)
    printf("Valores inferiores ou iguais ao u'ltimo nu'mero introduzido: ");
    for(i  = 0; i < n; i++){
        if(nums[i]){
            
        }
    }
}