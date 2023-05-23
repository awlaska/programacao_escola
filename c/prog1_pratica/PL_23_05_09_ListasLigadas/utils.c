#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

void clearScreen(){
    system(CLEAR);
}

void clearBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void pausa(){
    printf("\n Prima a tecla ENTER para continuar.\n");
    getchar();
}