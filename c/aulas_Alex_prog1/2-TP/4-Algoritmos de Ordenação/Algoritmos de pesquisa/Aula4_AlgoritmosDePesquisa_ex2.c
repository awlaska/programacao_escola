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
	//Algoritmos de pesquisa
	//Algoritmos de pesquisa
	//Algoritmos de pesquisa
	//pesquisa binaria
	//pesquisa binaria
	//pesquisa binaria
	//strings
		
//-----------------------------------------------------------
void insertionSort(char nomes[][100], int tam){
	int i=0, j=0;
	char aux[100];
	for(i=0; i<tam; i++){
		strcpy(aux, nomes[i]);
		j=i-1;
		while(j>=0 && strcmp(aux, nomes[j]) < 0){
			strcpy(nomes[j+1], nomes[j]);
			j--;
		}
		strcpy(nomes[j+1], aux);
	}
}

void printStr(char nomes[][100], int tam){
	int i=0;
	for(i=0; i<tam; i++){
		printf("%s\n", nomes[i]);
	}
}

int pesquisaBinStr(char str[][100], int tam, char nome[100]){
	int ini=0, fim=tam-1, meio=0, res=0;
	while(ini<=fim){
		meio=(ini+fim)/2;
		res=strcmp(nome, str[meio]);
		if(res == 0){return meio+1;}
		if(res > 0){ini=meio+1;}
		else{fim=meio-1;}
	}
	return -1;
}
//-----------------------------------------------------------
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	char cidades[9][100]={"Faro", "Viana", "Lisboa", "Beja", "Coimbra", "Porto", "Braga", "Aveiro", "Lagos"};
	int res=0;
	char aux[100];
	
	insertionSort(cidades, 9);
	printStr(cidades, 9);
	
	printf("\nInsira a cidade: ");
	gets(aux);
	
	res=pesquisaBinStr(cidades, 9, aux);
	if(res <0){
		printf("\nA cidade %s nao existe\n", aux);
	}else{
		printf("\nA cidade %s existe na posi��o %i \n", aux, res);
	}
	
    return 0;
}
//-----------------------------------------------------------
