#include <stdio.h>
#include "listaDupla.h"
#include "utils.h"

int menu() {
    int opc=0;
    printf("\nGestao Participantes:\n\n\tIntroduza Opcao: ");
    printf("\n\t1 --> Inserir um participante");
    printf("\n\t2 --> Listar por Ordem Crescente ");
    printf("\n\t3 --> Listar por Ordem Decrescente ");
    printf("\n\t4 --> Listar Participantes de um Pais");
    printf("\n\t5 --> Somar os Valores Pagos");
    printf("\n\t6 --> Somar os Valores de uma Instituicao");
    printf("\n\t7 --> Imprimir para um Ficheiro Binario");
    printf("\n\t8 --> Imprimir para um Ficheiro de Texto");
    printf("\n\t9 --> Alterar o Valor Pago");
    printf("\n\t10--> Total de Participantes Inscritos");
    printf("\n\t11--> Calcular a Media de Pagamentos");
    printf("\n\t12--> Remover um Participante ");
    printf("\n\t0 --> Sair\n");
    fflush(stdin);
    scanf("%d", &opc);
    clearBuffer();
    return opc;
}
int main() {
    int opc, tot = 0;
    char str_aux[100];
    INFO info;
    INFO *iniLista;
    INFO *fimLista;
    do {
        opc = menu();
        switch (opc) {
            case 1 :
                info.num = tot + 1;
                tot = tot + 1;
                printf("Insira o nome do participante: ");
                scanf("%[^\n]s", info.nome);
                clearBuffer();
                printf("Insira o nome do pai's do participante: ");
                scanf("%[^\n]s", info.pais);
                clearBuffer();
                printf("Insita o nome da instituicao do participante: ");
                scanf("%[^\n]s", info.inst);
                clearBuffer();
                printf("Insira o valor pago pelo participante: ");
                scanf("%f", &info.valorPago);
                inserir(info, &iniLista, &fimLista);
                break;
            case 2 :
                listarCresc(&iniLista);
                break;
            case 3 :
                listarDecresc();
                break;
            case 4 :
                printf("\nIntroduza o nome do pais:");
                fflush(stdin);
                gets(str_aux);
                listarPartPais();
                break;
            case 5 :
                // somaValPag()
                break;
            case 6 :
                // somaValInst()
                break;
            case 7 :
                // imprimeFichBin()
                break;
            case 8 :
                // imprimeFichTxt()
                break;
            case 9 :
                // alterarValPag()
                break;
            case 10 :
                // totalPart()
                break;
            case 11 :
                // mediaPag()
                break;
            case 12 :
                printf("\nIntroduza o numero a remover:");
                scanf("%d", &tot);
                //removerPart();
            case 0 :
                printf("\nSAIR ...\n");
                break;
            default:
                printf("\nSAIR Opcao ERRADA...\n");
                break;
        }
    } while (opc != 0);
// limpalista(…);
    return 0;
}