/*--------------------------------------------------*/
/*####             PROGRAMA??O EM C             ####*/
/*--------------------------------------------------*/
/*$$$$ 24-02-2021                               $$$$*/
/*$$$$ nome :    		  			            $$$$*/
/*$$$$ autor:  Alexandre Santos                 $$$$*/
/*--------------------------------------------------*/
/*@@@@ DIRECTIVAS DE INCLUS?O                   @@@@*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Recursividade
//Recursividade
//Recursividade
//Recursividade

/*@@@@ FUN??ES E PROCEDIMENTOS                  @@@@*/
//função recursiva para calcular tamanho de uma string
int calQuad(int num){
	//1º- Critério de paragem
	if(num < 1) return 1;
	return (calQuad(num-1) + 2*(num-1));

}
/*@@@@ FUN??O MAIN                              @@@@
*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
    system("COLOR FC");
	
	int val = 0, res = 0;
	
	printf("Insira um número: ");
	scanf("%d", &val);

	res=calQuad(val);
	printf("Resultado = %d\n", res);

	printf("\n\n");
    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES
