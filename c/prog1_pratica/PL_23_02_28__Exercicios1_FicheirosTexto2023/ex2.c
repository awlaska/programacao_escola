#include <stdio.h>
#include <stdlib.h>

int ex2(){
    char nome_ficheiro[50];
    char linha[100];
    FILE *fp = NULL;
    char *res = NULL;

    printf("Insira o nome do ficheiro com a extensao que quer abrir: ");
    scanf("%s", nome_ficheiro);

    fp = fopen(nome_ficheiro, "r");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        exit(EXIT_FAILURE);
    }

    while(!feof(fp)){
        res = fgets(linha, 100, fp);
        printf("%s", linha);
    }

 /* while((ch = fgetc(fp)) != EOF){
 *      printf("%c", ch);
 *  }
 */

    fclose(fp);
    return 0;
}