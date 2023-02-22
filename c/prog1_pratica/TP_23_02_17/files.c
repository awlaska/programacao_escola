#include <stdio.h>

int writeFile() {
    FILE *fp = NULL;
    fp = fopen("../TP_23_02_17/alunosEI_2023.txt", "w");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        return -1;
    }

    fprintf(fp, "Bem vindos a Programacao\n");
    fprintf(fp, "2022 - 2023");

    fclose(fp);
    return 0;
}

int readFile(){
    FILE *fp = NULL;
    char linha[100];
    char *res = NULL;

    fp = fopen("../TP_23_02_17/alunosEI_2023.txt", "r");

    if (fp == NULL) {
        printf("ERRO a abrir o ficheiro\n");
        return -1;
    }

//    while(!feof(fp)){
//        res = fgets(linha, 100, fp);
//        printf("%s", linha);
//    }

    while(ch = fgets(fp) != EOF){
        printf("%c", *ch);
    }

    fclose(fp);
    return 0;
}