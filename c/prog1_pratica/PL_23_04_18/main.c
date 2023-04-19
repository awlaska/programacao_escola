#include <stdio.h>
#include <stdlib.h>
//#include "lista.h"
#include "lista.c"

int menu() {
    int op = 0;
    printf("\nGestao Colaboradores --> Opcoes:");
    printf("\n\t1 --> Inserir Colaborador");
    printf("\n\t2 --> Lista Colaboradores");
    printf("\n\t3 --> Dados de um Colaborador");
    printf("\n\t4 --> Soma Salarios");
    printf("\n\t5 --> Total de Colaboradores");
    printf("\n\t6 --> Media Salarios");
    printf("\n\t7 --> Remover Colaborador");
    printf("\n\t8 --> Colaboradores com salario superior a: ");
    printf("\n\t9 --> Aumentar o salario de um Colaborador");
    printf("\n\t0 --> Sair\n");
    scanf("%i", &op);
    fflush(stdin);
    return op;
}

int main(){
    int op=0, numero=0, res = 0;
    ELEM *iniLista = NULL;
    COL col;

    do{
        system("cls");
        op=menu() ;
        switch (op) {
            case 1 :
                printf("Insira o nome do colaborador: ");
                scanf("%[^\n]s", col.nome);
                printf("Insira o numero do colaborador: ");
                scanf("%i", &col.numero);
                printf("Insira o NIF do colaborador: ");
                scanf("%li", &col.NIF);
                printf("Insira a data de nascimento do colaborador: ");
                scanf("%[^\n]s", col.dt_nascimento);
                printf("Insira o salario do colaborador: ");
                scanf("%f", &col.salario);
                res = inserirColaborador(&iniLista, col);
                if(res == 0){
                    printf("! Colaborador inserido com sucesso!");
                } else if(res == 1){
                    printf("! Numero ja existente!");
                }else if(res == 2){
                    printf("! NIF ja existente!");
                }
                printf("\nPressione uma tecla para continuar\n");
                getchar();
                break;
            case 2 :
                listarColaboradores(iniLista);
                printf("\nPressione uma tecla para continuar\n");
                getchar();
                break;
            case 3 :
                printf("\nIntroduza o numero do colaborador:");
                scanf("%d", &numero);
                // listaColaborador(…);
                break;
            case 4 :
                // printf(“Soma salarios=%.2f\n”, somaSal(…));
                break;
            case 5 :
                // printf(“Total colaboradores=%i\n”,somacolab(…));
                break;
            case 6 :
                // …
                break;
            case 7 :
                printf("\nIntroduza o numero do colaborador:");
                scanf("%d", &numero);
                //removerColab(…);
            case 0 :
                printf("A sair ...\n");
                break;
            default: printf ("Opcao errada\n");
        }
    }while (op != 0);
    // limpaLista(…);
    return 0;
}