#include <stdio.h>
#include <stdlib.h>

int quadratico(int num){
	if(num<=1){
		return 1;
	}
	return(2*(num-1)+quadratico(num-1));
}

int quadraticoIt(int num){
	int i=0, res=1;
	for(i=2;i<=num;i++){
		res+=2*(i-1);
	}
return res;
}

int main(){
	int num=0;
	printf("Introduza o numero: \n");
	scanf("%i", &num);
	printf("\nIterativo = %i\n", quadraticoIt(num));
	printf("Recursivo = %i\n", quadratico(num));
return 0;
}
