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
	Implementar um programa que concatene 2 strings. O programa dever� pedir ao 
		utilizador a 1� e a 2� string e dever� apresentar para o ecr� as duas strings concatenadas.
	As strings de entrada n�o t�m mais que 99 caracteres. A string final dever� ocupar
		apenas a mem�ria estritamente necess�ria.
*/

/*--------------------------------------------------*/
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    int i, j, size = 0;
    char string1[99], string2[99];
    char *stringFinal=NULL;
    
    //---------------------------------------
    printf("\n1� String: ");
    	scanf("%[^\n]%*c", string1);	
			for(i = 0; string1[i]!='\0'; ++i);
			
	printf("\n2� String: ");
    	scanf("%[^\n]%*c", string2);
			for(j = 0; string2[j]!='\0'; ++j);

	size = i + j;
    //---------------------------------------
	stringFinal=(char *)calloc(size+1, sizeof(char));
    
    if(stringFinal==NULL){
    	printf("OUT OF MEMORY!!");
    	return -1;
	}
	//---------------------------------------
	
	strcat(string1, string2);   
    strcat(stringFinal, string1);

    printf("\n\nConcatnada: %s\n", stringFinal);
    
    free(stringFinal);
    
	printf("\n\n");
    return 0;
}
/*--------------------------------------------------*/
