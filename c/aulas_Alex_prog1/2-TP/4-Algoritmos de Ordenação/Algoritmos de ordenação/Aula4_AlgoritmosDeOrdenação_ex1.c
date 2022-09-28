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
	//Bubble sort Arrays
	//Bubble sort Arrays
	//Bubble sort Arrays
	
//-----------------------------------------------------------
//recebe um array de inteiros--> int val[]
//recebe o tamanho do array--> int tam
void BubbleSort(int val[], int tam){
	int i=0, x=0, aux=0;
	
	for(x=0; x<tam; x++){
		for(i=0; i<tam-1; i++){
			if(val[i]> val[i+1]){
				aux=val[i];
				val[i]=val[i+1];
				val[i+1]=aux;
			}
		}
	}	
}

void printDados(int v[], int qtd){
	int i=0;
	
	for(i=0; i<qtd; i++){
		printf("%i\n", v[i]);
	}
}

//-----------------------------------------------------------
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	    
	int valores[10]={15,23,44,12,65,21,45,67,28,46};
	    
	BubbleSort(valores, 10);
	printDados(valores, 10);
	
    return 0;
}
//-----------------------------------------------------------
