#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int val[], int qtd){
	int x=0, i=0, aux=0;
	for(x=0; x<qtd;x++){
		for(i=0;i<qtd-1;i++){
			if(val[i]>val[i+1]){
				aux=val[i];
				val[i]=val[i+1];
				val[i+1]=aux;
			}
		}
	}
}

void printValores(int val[], int qtd){
	int i=0;
	for(i=0;i<qtd;i++){
		printf("%i\t", val[i]);
	}
}

int main(int argc, const char * argv[]){
	int valores[20]={34,67,2,89,33,21,5,7,8,90,12,78,43,21,10,20,30,40,1}, i=0;
	bubblesort(valores, 20);
	printf("%i\t", valores[i]);
}
