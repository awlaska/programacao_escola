#include <stdio.h>
#include <stdlib.h>

int seq(int num){
	if(num<=10){return 10;}
return 2*num-seq(num-1)+4;
}

int seqIt(int num){
	int i=0, res=10;
	for(i=11; i<=num;i++){
		res=2*i-res+4;
	}
return res;
}
	

int main(){
	int num=0;
	printf("Introduza um numero: \n");
	scanf("%i", &num);
	printf("\nRecursivo: %i", seq(num));
	printf("\nIterativo: %i", seqIt(num));
return 0;
}
