/*--------------------------------------------------*/
/*####             PROGRAMA??O EM C             ####*/
/*--------------------------------------------------*/
/*$$$$ autor:  Alexandre Santos                 $$$$*/
/*--------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*
	Implementar um programa que vá aceitando valores do utilizador e os guarde
		num vector, alocado dinamicamente. A leitura termina quando o utilizador introduzir o
		valor 0 (zero). Após a leitura, o programa deve apresentar a soma dos valores do vector.
*/

/*--------------------------------------------------*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
	int num, qtd=0, i, soma;
	int *vetor=NULL;
	
	do{
		printf("Número: ");
		scanf("%d", &num);
		if(num!=0){
			//Realloc para criar espaço enquanto o valor for diferente de 0
			vetor=(int *)realloc(vetor, (qtd+1)*sizeof(int));
			vetor[qtd]=num;
			qtd = qtd + 1;
		}
	}while(num != 0);
	
	for(i=0; i<qtd; i++){
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
	
	for(i=0; i<qtd; i++){
		soma+= vetor[i];
	}
	
	printf("\n\nSoma dos valores do array = %d", soma);
	
    free(vetor);
    
	printf("\n\n");
    return 0;
}
/*--------------------------------------------------*/
