#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX = 120;

typedef struct Func{
    int numColab;
    char nome[200];
    long int NIF;
    float salario;
} FUNC;

// DOING 5
FILE * abrirFicheiro(){
    FILE *fp = NULL;
    fp = fopen("../colaboradores.dat", "r+");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        return NULL;
    }
    return fp;
}

// DONE 1
int receberInformacao(FUNC func[], int *tot){
    char tipoa;
    func[*tot].numColab = *tot + 1;

    // DONE verificar se tem maximo de colaboradores
    if(*tot > 200){
        return 0;
    }

    printf("\nInsira o seu nome: ");
    scanf("%[^\n]*s", func[*tot].nome);
    fflush(stdin);

    printf("Insira o seu NIF: ");
    scanf("%li", &func[*tot].NIF);
    fflush(stdin);

    printf("Insira o seu sala'rio: ");
    scanf("%f", &func[*tot].salario);
    fflush(stdin);

    printf("# %s - %i - %li - %.2f", func[*tot].nome, func[*tot].numColab, func[*tot].NIF, func[*tot].salario);
    *tot = *tot + 1;
    return 1;
}

// DONE 2
void listaInfo(FUNC func[], int *tot) {
    printf("\n%-5s%-25s%-15s%-10s\n", "Nr", "Nome", "NIF", "Sala'rio");
    printf("--------------------------------------------------------");

    for (int i = 0; i < *tot; ++i) {
        printf("\n%-5d%-25s%-15li%-10.2f\n", func[i].numColab, func[i].nome, func[i].NIF, func[i].salario);
    }
}

// DONE 3 - bubbleSort
void ordenaNome(FUNC func[], int *tot){
    int x = 0, i = 0;
    FUNC aux;

    for(x=0; x<*tot; x++) {
        for (i=0; i<*tot-1; i++) {
            if(strcmp(func[i].nome, func[i+1].nome) > 0) {
                aux = func[i];
                func[i] = func[i+1];
                func[i+1] = aux;
            }
        }
    }
}

// DONE 4 - selectionSort
void ordenaNIF(FUNC func[], int *tot){
    int i=0, j=0, min=0;
    FUNC aux;

    for(i = 0; i < *tot - 1; i++) {
        min = i;
        for (j = i; j < *tot; j++) {
            if(func[j].NIF < func[min].NIF) {
                min = j;
            }
        } if(min != i){
            aux = func[i];
            func[i] = func[min];
            func[min] = aux;
        }
    }
}

// DONE 6 - insertionSort
void ordenaSalario(FUNC func[], int *tot){
    int i=0, j=0;
    FUNC aux;
    for(i=1;i<*tot;i++) {
        aux = func[i];
        j = i - 1;
        while(j >= 0 && func[j].salario > aux.salario) {
            func[j+1] = func[j];
            j--;
        }
        func[j+1] = aux;
    }
}

// DONE 7
int existeNome(FUNC func[], int *tot){
    char nome[200];
    printf("Insira o nome que quer procurar: ");
    scanf("%[^\n]s", &nome);

    for (int i = 0; i < *tot; ++i) {
        if(nome ==  func[i].nome){
            printf("\n%-5d%-25s%-15li%-10.2f\n", func[i].numColab, func[i].nome, func[i].NIF, func[i].salario);

            return 1;
        }
    }
    return 0;
}

// DONE 8
int existeNIF(FUNC func[], int *tot){
    long int num = 0;
    printf("Insira o NIF que quer procurar: ");
    scanf("%li", &num);

    for (int i = 0; i < *tot; ++i) {
        if(num ==  func[i].NIF){
            printf("\n%-5d%-25s%-15li%-10.2f\n", func[i].numColab, func[i].nome, func[i].NIF, func[i].salario);

            return 1;
        }
    }
    return 0;
}

// DONE 9
int existeNum(FUNC func[], int *tot){
    int num = 0;
    printf("Insira o nu'mero de colaborador que quer procurar: ");
    scanf("%i", &num);

    for (int i = 0; i < *tot; ++i) {
        if(num ==  func[i].numColab){
            printf("\n%-5d%-25s%-15li%-10.2f\n", func[i].numColab, func[i].nome, func[i].NIF, func[i].salario);

            return 1;
        }
    }
    return 0;
}

// DOING 10
void alteraValores(FUNC func[], int *tot){
    int num;
    float salario;
    printf("\nInsira o nu'mero do funciona'rio que quer alterar: ");
    scanf("%i", &num);
    fflush(stdin);
    printf("Insira o valor do sala'rio que quer alterar para: ");
    scanf("%f", &salario);

    func[num].salario = salario;
}

// DOING 11
void listarSalarioAcima(FUNC func[], int *tot){
    int base;
    printf("Insira o valor base do sala'rio: ");
    scanf("%i", &base);

    for(int i = 0; i < *tot; i++){
        if(func[i].salario > base){
            printf("\n%-5d%-25s%-15li%-10.2f\n", func[i].numColab, func[i].nome, func[i].NIF, func[i].salario);
        }
    }
}

// DOING MAIN
int main(){
    int tot = 0, opcao = 0, nr = 0;
    struct Func func[200];

    while(tot <= 200) {
        printf("\n\nInsira a opcao: \n");
        printf("1 - Receber informacao sobre um funciona'rio\n");
        printf("2 - Listar informacao\n");
        printf("3 - Ordenar funciona'rios por nome\n");
        printf("4 - Ordenar funciona'rios por NIF\n");
        printf("6 - Ordenar funciona'rios por sala'rio\n");
        printf("7 - Verificar se existe nome\n");
        printf("8 - Verificar se existe NIF\n");
        printf("9 - Verificar se existe nu'mero de colaborador\n");
        printf("10 - Alterar o salario de um funciona'rio\n");
        printf("11 - Listar funciona'rios com sala'rio superior a: \n");
        printf("> ");
        scanf("%i", &opcao);
        fflush(stdin);

        switch (opcao) {
            case 1: receberInformacao(func, &tot); break;
            case 2: listaInfo(func, &tot); break;
            case 3: ordenaNome(func, &tot); break;
            case 4: ordenaNIF(func, &tot); break;
            case 6: ordenaSalario(func, &tot); break;
            case 7: existeNome(func, &tot); break;
            case 8: existeNIF(func, &tot); break;
            case 9: existeNum(func, &tot); break;
            case 10: alteraValores(func, &tot); break;
            case 11: listarSalarioAcima(func, &tot); break;
            case 0:
                exit(EXIT_SUCCESS);
            default:
                printf("Insira uma opcao valida!");
                break;
        }
    }
}