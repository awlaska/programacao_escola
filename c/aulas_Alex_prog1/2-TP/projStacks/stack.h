


#include <stdio.h>
#include <string.h>
#define MAX 50


void push(char stack[], char c, int *tos);
char pop(char stack[], int *tos);
char top(char stack[], int tos);
int isEmpty(int tos);
int size(int tos);
