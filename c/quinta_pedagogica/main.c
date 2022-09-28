#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX 70

typedef struct funcionarios {
    int num;
    char nome[100];
    int nif;
    float salario;
}FUNC;

// MENU
int menu() {
    int opcao = 0;
    printf("\nIntroduza a opção: \n");
    printf("1 - Inserir dados\n");
    printf("2 - Listar dados\n");
    printf("3 - Ordenar por nome\n");
    printf("4 - Ordenar por nif\n");
    printf("5 - Criar ficheiro\n");
    printf("6 - Ordenar por salário\n");
    printf("7 - Verificar se existe nome\n");
    printf("8 - Verificar se existe NIF\n");
    printf("9 - Verificar se existe número\n");
    printf("10 - Alterar salário\n");
    printf("11 - Listar func com salário acima de um valor\n");

    printf("\n0 - SAIR\n");

    scanf("%i", &opcao);

    return opcao;
}

// Recebe informação de um funcionário
int recebeDados(FUNC funcs[], int tot) {
    printf("\nIntroduza os dados do funcionário:");
    printf("\nNome: "); // pede nome
    fflush(stdin); //flush the output buffer of the stream
    fgets(funcs[tot].nome, 100, stdin); // lê um nome com máximo de 100 caracteres
    funcs[tot].nome[strlen(funcs[tot].nome)-1]='\0'; // retira o \n do nome
    printf("\nNIF: "); // pede NIF
    scanf("%i", &funcs[tot].nif);
    printf("\nSalário: ");
    scanf("%f", &funcs[tot].salario);
    funcs[tot].num=tot+1;

    return 1;
}

// Listar todos os funcionários - Listar Dados
int listarDados(FUNC funcs[], int tot) {
    int i = 0;
    printf("Lista de Funcionários: ");
    for(i=0;i<tot;i++) {
        printf("\n%i - %s %i %.2f", funcs[i].num, funcs[i].nome, funcs[i].nif, funcs[i].salario);
    }
}

// Ordena por nome - Algoritmo Bubblesort
void ordenarNome(FUNC funcs[], int tot) {
    int i = 0, x = 0;
    FUNC aux;
    for (x = 0; x < tot; x++) {
        for(i = 0; i < tot-1-x;i++) {
            if(strcmp(funcs[i].nome, funcs[i+1].nome)>0) {
                aux = funcs[i];
                funcs[i] = funcs[i + 1];
                funcs[i + 1] = aux;
            }
        }
    }
}

// Ordena por NIF - Algoritmo SelectionSort
void ordenaPorNIF(FUNC funcs[], int tot) {
    int i = 0, j, min = 0;
    FUNC aux;
    for(i = 0; i < tot; i++) {
        min = i;
        // procura o índice do menor valor
        for(j = i; j < tot; j++) {
            if(funcs[min].nif > funcs[j].nif) {
                min = j;
            }
        }
        // troca o registo
        if(min != i) {
            aux = funcs[i];
            funcs[i] = funcs[min];
            funcs[min] = aux;
        }
    }
}

//Grava para ficheiro colaboradores.txt
int gravaFile(FUNC funcs[], int tot) {
    FILE *fp = NULL;
    int i = 0;
    fp = fopen("colaboradores.txt", "w");
    if(fp == NULL) {
        printf("Erro ao abrir o ficheiro\n");
        return -1;
    }
    fprintf(fp, "NOME                NUMERO    NIF      SALARIO\n");
    for(i = 0; i < tot; i++) {
        fprintf(fp, "%-15s - %03i %09i %.2f\n", funcs[i].nome, funcs[i].num, funcs[i].nif, funcs[i].salario);
    }
    fclose(fp);
    printf("Ficheiro criado com sucesso\n");
    return 0;
}

// Lista funcionários com salário superior a val
void listaValSup(FUNC funcs[], int tot, float val) {
    int i = 0, cont;
    for(i = 0; i < tot; i++) {
        if(funcs[i].salario > val) {
            printf("%i - %s %i %.2f\n", funcs[i].num, funcs[i].nome, funcs[i].nif, funcs[i].salario);
            cont++;
        }
    }
    printf("Existem %i funcionários com salário superior a %.2f\n", cont, val);
}

// Ordena o array pelo salário - Algoritmo Insertion Sort
void ordenaSalarios(FUNC funcs[], int tot) {
    int i = 0, j = 0;
    FUNC aux;
    for(i = 1; i < tot; i++) {
        aux = funcs[i];
        j = i - 1;
        while(j >= 0 && funcs[j].salario < aux.salario) {
            funcs[j + 1] = funcs[j];
            j--;
        }
        funcs[j + 1] = aux;
    }
}

// Verificar se existe um nome - Algoritmo Pesquisa Binária
int existeNome (FUNC funcs[], int tot, char nome[]) {
    int ini = 0, fuim = tot-1, meio = 0;
    while(ini<=fim) {
        meio =(ini + fim) / 2;
        if(strcmp(funcs[meio].nome, nome) == 0) {
            return(meio + 1);
        }
        if(strcmp(funcs[meio].nome, nome) < 0) {
            ini = meio + 1;
        }
        else{
            fim = meio - 1;
        }
    }
    return -1;
}

// Verificar se existe NIF - Algoritmo de Pesquisa Binária
int existeNIF(FUNC funcs[], int tot, int nif) {
    int ini = 0, fim = tot - 1, meio = 0;
    while(ini <= fim) {
        meio = (ini + fim) / 2;
        if(funcs[meio].nif == nif) {
            return (meio + 1);
        }SSSS
        if(funcs[meio].nif < nif) {
            ini = meio + 1;
        }
        else {
            fim = meio - 1;
        }
    }
    return -1;
}

// Verificar se Existe Número - Algoritmo Pesquisa Sequencial
int existeNum(FUNC funcs[], int tot, int num) {
    int i = 0;
    for(i = 0, i < tot; i ++) {
        if(funcs[i].num == num) {
            return(i + 1);
        }
    }
    return -1;
}

// Altera os salários de um funcionário (num)
int alteraValores(FUNC funcs[], int tot, int num) {
    int i = 0;
    for(i = 0; i <= tot; i ++) {
        if(funcs[i].num == num) {
            print("Introduza o valor do salário: ");
            scanf("%f", &funcs[i].salario);
        }
    }
}

// Grava os dados para Ficheiro Binário
int gravaDados(FUNC funcs[], int tot) {
    FILE *fp = NULL;
    long res = 0;
    fp = fopen("quinta_pedaogica.dat", "wb");
    if(fp == NULL) {
        print("Erro ao abrir o ficheiro. \n")
        return -1;
    }
    fwrite(&tot, sizeof(int), 1, fp);
    res = fwrite(&funcs[0], sizeof(FUNC), tot, fp);
    fclose(fp);
    printf("Gravou %ld registos\n", res);
    return 0;
}

// Ler Dados em Binário
int lerDados(FUNC funcs[]) {
    FILE *fp = NULL;
    int totAux = 0;
    long res = 0;
    fp = fopen("quinta.dat", "rb");
    if(fp == NULL) {
        printf("Erro ao abrir o ficheiro. \n");
        return 0;
    }
    res = fread(&funcs[0], sizeof(int), 1, fp);
    if(res > 0 && totAux >= 0) {
        res = fread(&funcs[0], sizeof(FUNC), totAux, fp);
        printf("Leu %ld registos. \n", res);
    }
    return totAux;
}

// MAIN
int main() {
    setlocale(LC_ALL, "Portuguese");
    FUNC funcionarios[MAX];
    int totFunc = 0, opcao = 0, res = 0, nif = 0, auxi = 0;
    char nome[100];
    float aux = 0;
    totFunc = lerDados(funcionario);
    do {
        opcao = menu();
        switch(opcao) {
            case 1:
                totFunc += recebeDados(funcionarios, totFunc);
            break;
            case 2:
                listarDados(funcionarios, totFunc);
                break;
            case 3:
                ordenarNome(funcionarios, totFunc);
                break;
            case 4:
                ordenaPorNIF(funcionarios, totFunc);
                break;
            case 5:
                ordenarNome(funcionarios, totFunc);
                gravaFile(funcionarios, totFunc);
                break;
            case 6:
                ordenaSalarios(funcionarios, totFunc);
                break;
            case 7:
                ordenarNome(funcionarios, totFunc);
                printf("\nIntroduza o nome a procurar: ");
                fflush(stdin);
                gets(nome);
                res = existeNome(funcionarios, totFunc, nome);
                if(res <= 0) {
                    printf("O nome %s não existe", nome);
                }
                else {
                    printf("O nome %s existe na posição %i", nome, res);
                }
                break;
            case 8:
                ordenaPorNIF(funcionarios, totFunc);
                printf("\nIntroduza o NIF a procurar: ");
                scanf("%i", &nif);
                res = existeNIF(funcionarios, totFunc, nif);
                if(res <= 0) {
                    printf("O NIF %i não existe.\n", nif);
                }
                else {
                    printf("O NIF %i encontra-se na posição %i", nif, res);
                }
                break;
            case 9:
                printf("\nIntroduza o número a pesquisar: ");
                scanf("%i", &auxi);
                res = existeNum(funcionarios, totFunc, auxi);
                if(res <= 0) {
                    printf("O número não existe.\n");
                }
                else {
                    printf("O número existe na posição %i\n", res);
                }
                break;
            case 10:
                printf("Introduza o número do funcionário\n");
                scanf("%i", &auxi);
                res = alteraValores(funcionarios, totFunc, auxi);
                if(res < 0) {
                    printf("O num não existe.");
                }
                else {
                    
                }
        }
    }

    return 0;
}