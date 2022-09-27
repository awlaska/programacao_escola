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
	//Selection Sort Strings
	//Selection Sort Strings
	//Selection Sort Strings
	
/*--------------------------------------------------*/
void SelectionSort(char str[][100], int tam){
	int  i=0, j=0, min=0; 
	char aux[100];
	
	for(i=0; i < tam-1; i++){
		min=i;	//procurar stirng menor alfabeticamente
		for(j=i; j<tam; j++){
			if(strcmp(str[min], str[j]) > 0){
				min=j;
			}
		}	
		//trocar string no min para i
		if(min!=i){
			strcpy(aux, str[i]);
			strcpy(str[i], str[min]);
			strcpy(str[min], aux);
		}
	}
}

void printDados(char v[][100], int qtd){
	int i=0;
	
	for(i=0; i<qtd; i++){
		printf("%s\n", v[i]);
	}
}

/*--------------------------------------------------*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	    
	char nomes[10][100]={"Faro", "Lisboa", "Viana do Castelo", "Evora", "Braga", "Fafe", "Viseu", "Coimbra", "Aveiro", "Bragança"};
	char pessoas[15][100]={"Ana", "Ze", "Rita", "Rui", "Marta", "Bruno", "Pedro", "Maria", "Andre", "Miguel", "Afonso", "Leonor", "Sara", "Luis", "Rosa"};
	    
	SelectionSort(nomes, 10);
	printDados(nomes, 10);
	printf("\n\n");
	SelectionSort(pessoas, 15);
	printDados(pessoas, 15);
  
    return 0;
}
/*--------------------------------------------------*/








