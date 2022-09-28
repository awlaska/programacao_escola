//
//  main.c
//  arraysdinamicos
//
//  Created by Pedro Coutinho on 31/03/2020.
//  Copyright © 2020 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int posicoes;
    int linhas;
    int colunas;
    int i,j;
    
    int *array_unidimensional;
    int **array_bidimensional;
    
    //Exemplo 1: array unidimensional e valores inseridos
    //    10  15  5  3  7  9
    printf("Exemplo 1: array unidimensional e valores inseridos\n");
    printf("Número de Posições do array unidimensional?");
    scanf("%d",&posicoes);
    //Reserva de memória de inteiros para as posições
    array_unidimensional = (int *)malloc(posicoes*sizeof(int));
    //Leitura de dados para o array
    for(i=0;i<posicoes;i++)
    {
        printf("array[%d]?:",i);
        scanf("%d",&array_unidimensional[i]); //array_unidimensional[i] OU *(array_unidimensional+i)
    }
    //Escrita dos valores do array
    for(i=0;i<posicoes;i++)
        printf("array[%d]: %d\n",i,array_unidimensional[i]);
    
    //libertar memória reservada
    free(array_unidimensional);
    
    
    
    //Exemplo 2: array bidimensional (implementação com array unidimensional) e valores inseridos
    //    2 linhas
    //    3 colunas
    //    Valores exemplo:
    //    10  15  5  3  7  9
    printf("Exemplo 2: array bidimensional (implementação com array unidimensional) e valores inseridos\n");
    printf("Número de Linhas do array bidimensional?");
    scanf("%d",&linhas);
    printf("Número de Colunas do array bidimensional?");
    scanf("%d",&colunas);
    
    array_unidimensional = (int *)malloc(linhas*colunas*sizeof(int));
    //Leitura de dados para o array
    for(i=0;i<linhas;i++)
        for(j=0;j<colunas;j++)
        {
            printf("array[%d][%d]:",i,j);
            scanf("%d",&array_unidimensional[i*colunas+j]);
            //SIMULAÇÃO
            //i=0            i*colunas+j     POSIÇÃO     VALOR
                //j=0        0*   3   +0       [0]       10
                //j=1        0*   3   +1       [1]       15
                //j=2        0*   3   +2       [2]       5
            //i=1
                //j=0        1*   3   +0       [3]       3
                //j=1        1*   3   +1       [4]       7
                //j=2        1*   3   +2       [5]       9
        }
    //Escrita dos valores do array
    for(i=0;i<linhas;i++)
        for(j=0;j<colunas;j++)
            printf("Elemento [%d][%d]: %d\n",i,j,array_unidimensional[i*colunas+j]);
    
    //libertar memória reservada
    free(array_unidimensional);


    
    //Exemplo 3: array bidimensional (implementação com array bidimensional) e valores inseridos
    //    2 linhas
    //    3 colunas
    //    Valores exemplo:
    //    10  15  5
    //    3   7   9
    printf("Exemplo 3: array bidimensional (implementação com array bidimensional) e valores inseridos\n");
    printf("Número de Linhas do array bidimensional?");
    scanf("%d",&linhas);
    printf("Número de Colunas do array bidimensional?");
    scanf("%d",&colunas);

    
    //array_bidimensional
    //       |
    //       V
    //       [0] -->    [0][1][2]
    //       [1] -->    [0][1][2]
    //
    
    //reserva memória para o array unidimensional de apontadores (na vertical no esquema acima)
    array_bidimensional = (int **)malloc(linhas*sizeof(int *));
    
    //Leitura de dados para o array
    for(i=0;i<linhas;i++)
    {
        //reserva memória para cada array unidimensional que cada apontador do array de apontadores está a apontar (na horizontal no esquema acima)
        array_bidimensional[i] = (int *)malloc(colunas*sizeof(int));
        for(j=0;j<colunas;j++)
        {
            printf("array[%d][%d]:",i,j);
            scanf("%d",&array_bidimensional[i][j]);
        }
    }
    //Escrita dos valores do array
    for(i=0;i<linhas;i++)
        for(j=0;j<colunas;j++)
            printf("Elemento [%d][%d]: %d\n",i,j,array_bidimensional[i][j]);
    
    //libertar memória reservada
    for(i=0;i<linhas;i++)
    {
        //liberta cada array unidimensional que cada apontador do array de apontadores está a apontar (na horizontal no esquema acima)
        free(array_bidimensional[i]);
    }
    //liberta o array unidimensional de apontadores (na vertical no esquema acima)
    free(array_bidimensional);
}
