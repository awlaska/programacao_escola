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
	//InsertionSort
	//InsertionSort
	//InsertionSort
	
//-----------------------------------------------------------
void InsertionSort(int val[], int tam){
	int i=0, j=0, aux=0;
	
	//No insertion começa sempre no 1 senao vai crashar
	for(i=1; i<tam; i++){
		aux=val[i];
		j=i-1;
		//procurar onde o aux encaixa
		//(maior para menor: aux > val[j])
		//(menor para maior: aux < val[j])
		while(j>=0 && aux < val[j]){
			val[j+1]=val[j];
			j--;
		}
		val[j+1]=aux;
	}
}

void printDados(int val[], int tam){
	int i=0;
	
	for(i=0; i<tam; i++){
		printf("%i\n", val[i]);
	}
}
//-----------------------------------------------------------
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	    
	int num[20]={33, 55, 66, 77, 12, 233, 56, 876, 342, 435, 1123, 768, 234, 567, 123, 1, 2, 3, 4, 5};
	int notas[5]={10, 20, 12, 03, 19};
	
	//array que vai ordenar e o tamanho    
	InsertionSort(num, 20);
	printDados(num, 20);
	printf("\n\n");
	
	//array que vai ordenar e o tamanho
	InsertionSort(notas, 5);
	printDados(notas, 5);
	
    return 0;
}
//-----------------------------------------------------------
