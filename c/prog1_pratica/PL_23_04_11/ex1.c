#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ex1(){
    char prim[100], sec[100], *concat;

    printf("Insira a primeira string que pretede concatenar: ");
    fflush(stdin);
    gets(prim);

    printf("Insira a segunda string que pretende concatenar: ");
    gets(sec);

    int prim_len = sizeof(prim), sec_len = sizeof(sec);
    concat = (char *) malloc (prim_len + sec_len);

    strcpy(concat, prim);
    strcat(concat, sec);

    printf("\n%s", concat);

    free(concat);
    return 0;
}