#include <stdio.h>

enum tipoUser {administrador = 0, analista = 1};
enum tipoGar {imovel = 0, fiador = 1, depositos = 2, produtos = 3};
enum prioridade {minima = 0, media = 1, maxima = 2};

typedef struct utilizador{
    char username[20];
    char nome[200];
    char password[20];
    enum tipoUser tipo;
}UT;

typedef struct garantia{
    enum tipoGar tipo;
    char descricao[200];
    float valor;
}GAR;

typedef struct credito{
    int numero;
    char username[20];
    char nome[200];
    long int IBAN;
    float montante;
    GAR garantia[5]; //um conjunto de até cinco garantias
    enum prioridade prioridade;
}CRED;

// DOING
FILE * abrirFicheiro() {
    FILE *fp = NULL;
    fp = fopen("../", "r+");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        return NULL;
    }
    return fp;
}

// DOING
void lerFicheiro(){
    FILE *fp = abrirFicheiro();

}

//TODO - admin - CRUD - Inserir
//TODO - admin - CRUD - Alterar
//TODO - admin - CRUD - Apagar
//TODO - admin - CRUD - Pesquisar/Listas
//TODO - admin - listar propostas de crédito por analisar;
//TODO - admin - listar propostas de crédito analisadas;
//TODO - admin - listar todas as propostas de crédito de uma determinada prioridade;
//TODO - admin - listar todas as propostas de crédito acima de terminado montante;
//TODO - admin - listar todas as propostas de crédito analisadas por um determinado utilizador,
// ordenadas primeiro por data de análise, e depois por parecer (positivo/negativo);
//TODO - admin - pesquisar propostas de crédito por nome de cliente;
//TODO - admin - escrever num ficheiro de texto um relatório das propostas de crédito analisadas, ordenadas por montante;
//TODO - admin - gerar o ranking de utilizadores por número de propostas de crédito analisadas.

//TODO - analista - criar listas para prioridades de garantias

int main() {

}
