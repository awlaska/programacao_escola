//
//  main.c
//  torres_hanoi
//
//  Created by Pedro Coutinho on 28/02/2019.
//  Copyright © 2019 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

/* configuração dos caracteres a apresentar para disco, separador de linha e separador de coluna */
#define CARACTER_DISCO              '_'
#define CARACTER_SEPARADOR_COLUNA   '|'
#define CARACTER_SEPARADOR_LINHA    '-'
#define CARACTER_ESPACO             ' '


/* constantes boleanas*/
#define FALSO 0
#define VERDADEIRO 1

/* número de discos - mudar para testar com outros valores */
#define ND 3
/* número de torres - sempre 3 e não mudar */
#define NT 3

/******************************************************************/
/* função que escreve um determinado número de vezes o mesmo      */
/* caracter. Pode ainda mudar de linha ou não.                    */
/*                                                                */
/*  int numero - número de vezes a escrever o caracter            */
/*  char caracter - o caracter a escrever                         */
/*  int muda_linha - valor boleano que indica se se deve ou       */
/*                   mudar de linha depois de todos os caracteres */
/*                                                                */
/* valor a retornar: nenhum (void)                                */
/*                                                                */
/******************************************************************/
void escreve_n_caracteres(int numero, char caracter, int muda_linha)
{
    int i;
    for(i=0;i<numero;i++)
        putchar(caracter);
    if(muda_linha) putchar('\n');
}

/********************************************************************/
/* função que mostra os discos nas três torres                      */
/* Nota: as torres são globais para que o mosta_torres as           */
/* apresente pela ordem A B C                                       */
/*                                                                  */
/* int ndiscos - número de discos a mover da torre de origem        */
/*               para a torre de destino                            */
/* int *torreA - apontador para torre A                             */
/* int *torreB - apontador para torre B                             */
/* int *torreC - apontador para torre B                             */
/* int dim     - dimensão das torres                                */
/*                                                                  */
/* valor a retornar: nenhum (void)                                  */
/*                                                                  */
/********************************************************************/
void mostra_torres(int *torreA, int *torreB, int *torreC, int ntorres, int ndiscos, int nmovimentos)
{
    int i;
    
    /* escreve cabeçalho */
    escreve_n_caracteres((ndiscos+1)*ntorres+1, CARACTER_SEPARADOR_LINHA, VERDADEIRO);
    printf("%cA",CARACTER_SEPARADOR_COLUNA);
    escreve_n_caracteres(ndiscos-1, CARACTER_ESPACO, FALSO);
    printf("%cB",CARACTER_SEPARADOR_COLUNA);
    escreve_n_caracteres(ndiscos-1, CARACTER_ESPACO, FALSO);
    printf("%cC",CARACTER_SEPARADOR_COLUNA);
    escreve_n_caracteres(ndiscos-1, CARACTER_ESPACO, FALSO);
    printf("%c\n",CARACTER_SEPARADOR_COLUNA);
    escreve_n_caracteres((ndiscos+1)*ntorres+1, CARACTER_SEPARADOR_LINHA, VERDADEIRO);
    /* escreve torres e discos */
    for(i=0;i<ND;i++)
    {
        /* escreve disco torre A nível i */
        putchar(CARACTER_SEPARADOR_COLUNA);
        escreve_n_caracteres(*(torreA+i), CARACTER_DISCO, FALSO);
        escreve_n_caracteres(ndiscos-*(torreA+i), CARACTER_ESPACO, FALSO);
        /* escreve disco torre B nível i */
        putchar(CARACTER_SEPARADOR_COLUNA);
        escreve_n_caracteres(*(torreB+i), CARACTER_DISCO, FALSO);
        escreve_n_caracteres(ndiscos-*(torreB+i), CARACTER_ESPACO, FALSO);
        /* escreve disco torre C nível i */
        putchar(CARACTER_SEPARADOR_COLUNA);
        escreve_n_caracteres(*(torreC+i), CARACTER_DISCO, FALSO);
        escreve_n_caracteres(ndiscos-*(torreC+i), CARACTER_ESPACO, FALSO);
        printf("%c\n",CARACTER_SEPARADOR_COLUNA);
    }
    /* escreve redapé */
    escreve_n_caracteres((ndiscos+1)*ntorres+1, CARACTER_SEPARADOR_LINHA, VERDADEIRO);
    printf("Movimentos: %d\n",nmovimentos);
    getchar(); /* depois de mostrar espera por entrer para continuar - comentar esta linha para se ver tudo seguido */
}

/************************************************************/
/* função para mover um disco de uma torre (origem) para    */
/* outra (destino)                                          */
/*                                                          */
/* int *torre_origem - apontador para torre de origem       */
/* int *torre_destino - apontador para torre de destino     */
/*                                                          */
/* valor a retornar: nenhum (void)                          */
/*                                                          */
/************************************************************/
void move_disco(int *torre_origem, int *torre_destino, int *nmovimentos)
{
    int i=0,j=0;
    
    //while((*(torre_origem + i)==0)&&(i<ND))
    while((torre_origem[i]==0) && (i<ND))
        i++;
    //while((*(torre_destino + j)==0)&&(j<ND))
    while((torre_destino[j]==0) && (j<ND))
        j++;
    
    //*(torre_destino+j-1) = *(torre_origem+i);
    torre_destino[j-1] = torre_origem[i];
    //*(torre_origem + i) = 0;
    torre_origem[i] = 0;
    
    /* incrementa número de movimentos */
    (*nmovimentos)++;
}

/********************************************************************/
/* função recursiva que resolve o problema Torres de Hanoi          */
/*                                                                  */
/* int ndiscos - número de discos a mover da torre de origem        */
/*               para a torre de destino                            */
/* int *torre_origem - apontador para torre de origem dos discos    */
/* int *torre_destino - apontador para torre de destino dos discos  */
/* int *torre_auxiliar - apontador para torre auxiliar              */
/*                                                                  */
/* valor a retornar: nenhum (void)                                  */
/*                                                                  */
/********************************************************************/
void torres_hanoi(int ndiscos,int *torre_origem, int *torre_destino, int *torre_auxiliar, int *nmovimentos)
{
    if(ndiscos==1)
    {
        move_disco(torre_origem, torre_destino, nmovimentos);
        /* mostra torres a cada movimento */
        mostra_torres(torre_origem,torre_destino,torre_auxiliar,NT,ND, *nmovimentos);
    }
    else
    {
        torres_hanoi(ndiscos-1,torre_origem, torre_auxiliar, torre_destino, nmovimentos);
        move_disco(torre_origem, torre_destino, nmovimentos);
        /* mostra torres a cada movimento */
        mostra_torres(torre_origem,torre_destino,torre_auxiliar,NT,ND, *nmovimentos);
        torres_hanoi(ndiscos-1, torre_auxiliar, torre_destino, torre_origem, nmovimentos);
    }
}

/*****************************************************************/
/* Função Principal (main()) do problema das Torres de Hanoi     */
/*                                                               */
/* As torres são implementadas pelos arrays globais A, B e C     */
/* com número de discos N.                                       */
/*                                                               */
/*****************************************************************/
int main(int argc, const char * argv[])
{
    /* Variáveis que representam as Torres A, B e C */
    int tA[ND], tB[ND], tC[ND];
    /* Variável para contar o número de movimentos dos discos */
    int nmovimentos=0;
    
    int i;
    
    /* inicialização das torres - número na torre indica dimensão inversa do disco*/
    for(i=0;i<ND;i++)
    {
        tA[i]=i+1;
        tB[i]=0;
        tC[i]=0;
    }
    
    printf("Torres de Hanoi com %d discos\n",ND);
    
    /* mostra estado inicial das torres A, B e C */
    mostra_torres(tA,tB,tC,NT,ND, nmovimentos);
    
    /* ND = número de discos, Torre A = Torre de Origem, Torre B = Torre de Destino, Torre C = Torre Auxiliar */
    torres_hanoi(ND,tA,tB,tC, &nmovimentos);
    
    printf("\nTerminou com %d (2^%d - 1) movimentos de discos!",nmovimentos,ND);
    getchar();
    return 0;
}


