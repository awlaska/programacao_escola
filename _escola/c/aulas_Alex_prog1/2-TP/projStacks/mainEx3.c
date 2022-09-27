#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

//EXercicio 3
//!!!!!!!!!!!!!!!!!!!!
//ainda não está feito
//!!!!!!!!!!!!!!!!!!!!

int main(){
	
	char expressao[MAX];
	char stack[MAX];
	int tos=0, i=0;
	
	printf("Intr. a expressão: ");
	gets(expressao);	
	
	for(i=0; i<strlen(expressao); i++){
		if(expressao[i]=='('){
			push(stack, expressao[i], &tos);
		}
		if(expressao[i]==')'){
			if(isEmpty(tos)){
				printf("Expressao ERRADA - Falta abrir");
				return;
			}	
			else{
				pop(stack, &tos);
			}
		}		
	}
	if(isEmpty(tos)){
		printf("Expressao CORRETA\n");
	}else{
		printf("Expressao ERRADA - falta fechar\n");
	}
	return 0;
}



