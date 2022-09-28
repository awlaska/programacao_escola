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
	//corta o array em metade sempre que pergunta o nmr
	
//-----------------------------------------------------------
void insertionSort(int val[], int tam){
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

int pesquisaBin(int v[], int tam, int x) {
    int meio, ini = 0, fim = tam - 1; // fim fica com o ultimo indice
    while (ini <= fim) {
        meio = (fim + ini) / 2;
        if (x == v[meio]) {
            return (meio + 1);
        }
        if (x < v[meio]) {
            fim = meio - 1;
        } else {
            ini = meio + 1;
        }
    }
    return -1;
}

//-----------------------------------------------------------
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
	    
    int val[8] = {70, 25, 34, 15, 5, 60, 3, 35};
    int aux = 0, res;

    insertionSort(val, 8);
    printf("Insira um valor: ");
    scanf("%d", &aux);

    res = pesquisaBin(val, 8, aux);
    if(res >= 0) {
        printf("O valor %d existe na posicao %d\n", aux, res);
    } else {
        printf("O valor %d nao existe", aux);
    }
	
    return 0;
}
//-----------------------------------------------------------
