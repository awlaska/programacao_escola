/*--------------------------------------------------*/
/*####             PROGRAMA??O EM C             ####*/
/*--------------------------------------------------*/
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
	//Selection Sort
	//Selection Sort
	//Selection Sort
	
/*--------------------------------------------------*/
//recebe um array de inteiros--> int val[]
//recebe o tamanho do array--> int tam
void SelectionSort(int val[], int tam){
	int  i=0, j=0, aux=0, min=0;
	
	for(i=0; i < tam-1; i++){
		min=i;
		for(j=i; j<tam; j++){
			if(val[min]> val[j]){				
				min=j;
			}
		}
		aux=val[i];	//trocar min pelo i
		val[i]=val[min];
		val[min]=aux;
	}
}

void printDados(int v[], int qtd){
	int i=0;
	
	for(i=0; i<qtd; i++){
		printf("%i\n", v[i]);
	}
}

/*--------------------------------------------------*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	    
	int valores[10]={15,23,44,12,65,21,45,67,28,46};
	    
	SelectionSort(valores, 10);
	printDados(valores, 10);
    return 0;
}
/*--------------------------------------------------*/









