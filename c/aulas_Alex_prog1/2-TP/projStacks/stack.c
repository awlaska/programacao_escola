#include "stack.h"

void push(char stack[], char c, int *tos){
	if(*tos >= MAX){
		printf("Stack Overflow\n");
		return;
	}
	stack[*tos]=c;
	(*tos)++;
}

char pop(char stack[], int *tos){
	char aux='\0';
	if(*tos <= 0){
		printf("Stack Overflow\n");
	}else{
		aux=stack[*tos-1];
		(*tos)--;
	}
	return aux;
}

char top(char stack[], int tos){
	char aux='\0';
	if(tos <= 0){
		printf("Stack Overflow\n");
	}else{
		aux=stack[tos-1];
	}
	return aux;
}

int isEmpty(int tos){
	if(tos <= 0){
	return 1;
	}else{
		return 0;
	}
}

int size(int tos){
	return tos;
}


