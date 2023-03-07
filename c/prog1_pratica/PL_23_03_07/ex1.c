#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX = 200;

enum tipoEnum{E, A, C, O};

struct participantes{
    float valorPago;
    enum tipoEnum tipo;
    char nome[100];
} PART[200];

//DONE
int contarParticipantes(FILE *fp){
    fseek(fp, 0, SEEK_END);
    return ftell(fp)/sizeof(PART);
}

    //DONE
int pedirNrParticipante(){
    int nr;
    printf("Insira o nu'mero do participante: ");
    scanf("%i", &nr);
    return nr;
}

FILE * abrirFicheiroReadBM(){
    FILE *fp = NULL;
    fp = fopen("../workshop.dat", "rb+");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        return NULL;
    }
    return fp;
}

FILE * abrirFicheiroAppendBM(){
    FILE *fp = NULL;
    fp = fopen("../workshop2023.dat", "ab+");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        return NULL;
    }
    return fp;
}

    //TODO verificar se dá certo
    // corrigir enters
    // nao pede o nome
struct participantes receberInformacao(int tot){
    char tipoa;
    printf("\nInsira o seu nome: ");
    scanf("%[^\n]*s", PART[tot].nome);
    fflush(stdin);
    printf("Insira o valor pago: ");
    scanf("%f", &PART[tot].valorPago);
    fflush(stdin);
    printf("Insira o tipo de participante ((E)mpresa, (A)luno, (C)onvidado, (O)utro): ");
    scanf("%c", &tipoa);
    fflush(stdin);

        switch (tipoa) {
            case 'E':
                PART[tot].tipo = E;
                break;
            case 'A':
                PART[tot].tipo = A;
                break;
            case 'C':
                PART[tot].tipo = C;
                break;
            case 'O':
                PART[tot].tipo = O;
                break;
        }

    printf("# %s - %.2f - %u", PART[tot].nome, PART[tot].valorPago, PART[tot].tipo);

    return PART[tot];
}

    //TODO ler do ficheiro
int listarInformacao(){
        FILE *fp = abrirFicheiroAppendBM();

        char linha[200];

        char ch[200];
        while((strcpy(ch, fgets(linha, 200, fp))) != EOF){
        printf("%c", ch);
    }

        fclose(fp);
        return 0;
    }

    //TODO fazer acesso direto fsync()
void listarParticipante(int numero){}

    //TODO ler do ficheiro e somar valorPago
void somaPagamentos(){}

    //TODO ler ficheiro e agrupar os do mesmo tipo
void listarParticipantesTipo(){}

    //TODO escrever no ficheiro numero e nome (linha)
void escreverInformacaoFicheiro(){}

    //TODO alterar valor pago
void alterarInformacao(int numero){}

    //TODO verificar
int main(){
    int tot = 0, opcao = 0, nr = 0;
    struct participantes;

    while(tot <= 1) {
        printf("\n\nInsira a opcao: \n");
        printf("1 - Receber informacao sobre um participante\n");
        printf("2 - Listar informacao\n");
        printf("3 - Listar um participante\n");
        printf("4 - Soma pagamentos\n");
        printf("5 - Listar por tipo de participante\n");
        printf("6 - Escrever informacao para o ficheiro\n");
        printf("7 - Alterar informacao");
        printf("\n");
        scanf("%i", &opcao);
        fflush(stdin);

        switch (opcao) {
            case 1:
                receberInformacao(tot);
                break;
            case 2:
                //listarInformacao();
                break;
            case 3:
                //DONE pedir numero do participante
                nr = pedirNrParticipante();
                listarParticipante(nr);
                break;
            case 4:
                somaPagamentos();
                break;
            case 5:
                listarParticipantesTipo();
                break;
            case 6:
                escreverInformacaoFicheiro();
                break;
            case 7:
                //DONE pedir numero do participante
                nr = pedirNrParticipante();
                alterarInformacao(nr);
                break;
            case 0:
                exit(EXIT_SUCCESS);
            default:
                printf("Insira uma opcao valida!");
                break;
        }
    }
}