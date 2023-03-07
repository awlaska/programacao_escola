#include <stdio.h>
#include <stdlib.h>

enum tipoEnum{E, A, C, O};

struct participantes{
    float valorPago;
    enum tipoEnum tipo;
    char nome[];
} PART[200];

    //DONE
int pedirNrParticipante(){
    int nr;
    printf("Insira o nu'mero do participante: ");
    scanf("%i", nr);
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
struct participantes receberInformacao(int tot){
    char tipoa;
    printf("Insira o seu nome: ");
    scanf("%[^\n]s", PART[tot].nome);
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

        char *ch;
        while((ch = fgets(linha, 200, fp)) != EOF){
        printf("%c", *ch);
    }

        fclose(fp);
        return 0;
    }

    //TODO fazer acesso direto fsync()
void listarParticipante(int numero){}

    //TODO ler do ficheiro e somar valorPago
void somaPagamentos(){}

    //TODO ler ficheiro e agrupar os do mesmo tipo
void listarParticipantesTipo(char tipoa){}

    //TODO escrever no ficheiro numero e nome (linha)
void escreverInformacaoFicheiro(){}

    //TODO alterar valor pago
void alterarInformacao(int numero){}

    //TODO
int main(){
    int tot = 0, opcao = 0, nr = 0;
    struct participantes;

    while(tot <= 1){
        printf("Insira a opcao: \n");
        printf("1 - Receber informacao sobre um participante\n");
        printf("2 - Listar informacao\n");
        printf("3 - Listar um participante\n");
        printf("4 - Soma pagamentos\n");
        printf("5 - Listar por tipo de participante\n");
        printf("6 - Escrever informacao para o ficheiro\n");
        printf("7 - Alterar informacao\n");
        scanf("%i", &opcao);

        switch (opcao) {
            case 1:
                receberInformacao(tot);
                break;
            case 2:
                listarInformacao();
                break;
            case 3:
                //TODO pedir numero do participante
                nr = pedirNrParticipante();
                listarParticipante(nr);
            case 4:
            case 5:
            case 6:
            case 7:
                //TODO pedir numero do participante
                nr = pedirNrParticipante();
                alterarInformacao(nr);
            default:
                printf("Insira uma opcao valida!");
                break;
        }

         PART[tot] = receberInformacao(tot);
         printf("", PART[tot]);
    }

    listarInformacao();

    escreverInformacaoFicheiro();

}