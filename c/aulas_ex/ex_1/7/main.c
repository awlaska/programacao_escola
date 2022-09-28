#include <stdio.h>
#include <stdlib.h>

int fib(int num){
	if(num==1 || num==2){return 1;}
	return(fib(num-1)+fib(num-2));
}

int fibIt(int num){
	int i=0, res=1, ant=1, ant2=1;;
	for(i=3;i<=num;i++){
		res=ant+ant2;
		ant2=ant;
		ant=res;
	}
return res;
}

int main(){
	int num=0;
	printf("Introduza o numero: \n");
	scanf("%i", &num);
	printf("\nIterativo = %i\n", fibIt(num));
	printf("Recursivo = %i\n", fib(num));
}
