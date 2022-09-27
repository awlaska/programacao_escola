/*--------------------------------------------------*/
/*####             PROGRAMA??O EM C             ####*/
/*--------------------------------------------------*/
/*$$$$ 10-03-2021                               $$$$*/
/*$$$$ nome :    		  			            $$$$*/
/*$$$$ autor:  Alexandre Santos                 $$$$*/
/*--------------------------------------------------*/
/*@@@@ DIRECTIVAS DE INCLUS?O                   @@@@*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
	//Algoritmos de ordenação
	//Algoritmos de ordenação
	//Algoritmos de ordenação
	//Bubble sort Strings
	//Bubble sort Strings
	//Bubble sort Strings
	
//-----------------------------------------------------------
//recebe um array de inteiros--> int val[]
//recebe o tamanho do array--> int tam
void BubbleSortCres(char str[][100], int tam){
	int i=0, x=0;
	char aux[100];
	
	for(x=0; x<tam; x++){
		for(i=0; i<tam-1; i++){
			if(strcmp(str[i], str[i+1])>0){
				strcpy(aux, str[i]);
				strcpy(str[i], str[i+1]);
				strcpy(str[i+1], aux);
			}
		}
	}	
}
void BubbleSortDcres(char str[][100], int tam){
	int i=0, x=0;
	char aux[100];
	
	for(x=0; x<tam; x++){
		for(i=0; i<tam-1; i++){
			if(strcmp(str[i], str[i+1])<0){
				strcpy(aux, str[i]);
				strcpy(str[i], str[i+1]);
				strcpy(str[i+1], aux);
			}
		}
	}	
}

//para fazer crescente ou decrescente basta alterar o sinal para > ou <

void printDados(char str[][100], int qtd){
	int i=0;
	
	for(i=0; i<qtd; i++){
		printf("%s\n", str[i]);
	}
}

//-----------------------------------------------------------
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	    
	char nomes[10][100]={"Faro", "Lisboa", "Viana do Castelo", "Evora", "Braga", "Fafe", "Viseu", "Coimbra", "Aveiro", "Bragança"};
	
	BubbleSortCres(nomes, 10);
	printDados(nomes, 10);
	printf("\n\n");
	
	BubbleSortDcres(nomes, 10);
	printDados(nomes, 10);
	
    return 0;
}
//-----------------------------------------------------------









