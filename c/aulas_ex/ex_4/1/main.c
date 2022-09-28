#include <stdio.h>
#include <stdlib.h>

#define MAX==70

typedef struct funcionario{int num, nif; char nome[100]; float salario}; FUNC;

int menu(){
	int opcao=0;
	printf("Insira o numero da opção: \n");
	printf("1 - Inserir dados\n");
	printf("2 - Listar dados\n");
	printf("3 - Ordenar por nome\n");
	printf("4 - Ordenar por NIF\n");
	printf("5 - Criar ficheiro\n");
	printf("6 - Ordenar por salário\n");
	printf("7 - Verificr se existe nome\n");
	printf("8 - Verificar se existe NIF\n");
	printf("9 - Verificar se existe número\n");
	printf("10 - Alterar salario\n");
	printf("11 - Listar func com salario acima de um valor\n");
	printf("0 - SAIR\n");
	scanf("%i", &opcao);
return opcao;
}

int recebeDados(FUNC funcs[], int tot){ // recebe informação sobre um funcionario
	printf("\nIntroduza os dados dos funcionario:\nNome: \n");
	fflush(stdin);
	fgets(funcs[tot].nome, 100, stdin); // lê o nome com maximo de 100 caracteres
	funcs[tot].nome[strlen(funcs[tot].nome)-1]='\0'; // retira o \n do nome
	// gets(funcs[tot].nome);
	printf("NIF: \n");
	scanf("%i", &funcs[tot].nif);
	printf("Salário: \n");
	scanf("%f", &funcs[tot].salario);
	funcs[tot].num=tot+1;
return 1;
}

void ListarDados(FUNC funcs,int tot){ // lista todos os funcionario
	int i=0;
	printf("Lista de Funcionarios:\n")
	for(i=0; i<tot;i++){
		printf("&i - %s %i %.2f\n", funcionarios[i].numero, funcionarios[i].nome, &funcionarios[i].nif, &funcarios[i].salario);
	}
}

void ordenarPorNome(FUNC funcs[], int tot){ // ordena o array por nome - bubblesort
	int i=0, x=0;
	FUNC aux;
	for(x=0;x<tot;x++){
		for(i=0;i<tot-1-x;i++){
			if(strcmp(funcs[i].nome,funcs[i+1].nome>0)){
				aux=funcs[i];
				funcs[i]=funcs[i+1];
				funcs[i+1]=aux;
			}
		}
	}
}

void ordenarPorNIF(FUNC funcs[], int tot){ // ordena o array por NIF -  selectionSort
	int i=0, min=0;
	FUNC aux;
	for(i=0;i<tot-1;i++){
		min=i;
		// procura o indice de menor valor
		for(j=i;j<tot;j++){
			if(funcs[min].nif>funca[j].nif){
				min=j;
			}
		}
		// troca o registo
		if(min!=i){
			aux=funcs[i];
			funcs[i]=funcs[min];
			funcs[min]=aux;
		}
	}
}

int gravaFile(FUNC funcs[], int tot){ // grava toda a informação para  ficheiro colaboradores.txt
	FILE *fp=NULL;
	int i=0;
	fp=fopen("colaboradores.txt","w");
	if(fp==NULL){
		printf("Erro ao abrir ficheiro\n");
	return -1;
	}
	fprintf(fp, "NOME		Numero	NIF		Salário");
	for(i=0;i<tot;i++){
		fprintf(fp,"%-15s -%03i %09i %.2f\n", funcs[i].nome, funcs[i].num), funcs[i].nif, funcs[i].salario);
	}
	fclose(fp);
	printf("Ficheiro criado com sucesso\n");
return 0;
}

void ListaValSup(FUNC funcs[], int tot, float val){ // lista s funcionarios com salario > val
	int i=0, cont=0;
	for(i=0;i<yoy;i++){
		if(funcs[i].salario>val){
			printf("&i - %s %i %.2f\n", funcs[i].num, funcs[i].nome, funcs[i].nif, funcs[i].salario);
			cont++;
		}
	}
	printf("Existem %i funcionarios com salario superior a %.2f\n", cont, val)
}

void ordenaSalarios(FUNC funcs[], int tot){ // ordena o array pelo salario - insertionsort
	int i=0, j=0;
	FUNC aux;
	for(i=1;i<tot;i++){
		aux=funcs[i];
		j=i-1;
		while(j>=0 && funcs[j].salario<aux.salario){
			funcs[j+1]=funcs[j];
			j--;
		}
		funcs[j+1]=aux;
	}
}

int existeNome(FUNC funcs[], int tot, char nome[]){ // verificar se existe nome - algoritmo de pesquisa binaria
	int ini=0, fim=tot-1, meio=0;
	while(ini<=fim){
		meio(ini+fim)/2;
		if(strcmp(funcs[meio].nome, nome)==0){
			return(meio+1);
		}
		if(strcmp(funcs[meio].nome, nome)==0){
		return(meio+1);
		}
		if(strcmp(funcs[meio].nome, nome)<0){
			ini=meio+1;
		}
		else{
			fim=meio-1;
		}
	}
return -1;
}

int existeNIF(FUNC funcs[], int tot, int nif){ // verficar se existe NIF - algoritmo de pesquisa binaria
	int ini=0, fim=tot-1, meio=0;
	while(ini<=fim){
		meio=(ini+fim)/2;
		if(funcs[meio].nif==nif){
		return(meio+1);
		}
		if(funcs[meio].nif<nif){
			ini=meio+1;
		}
		else{
			fim=meio-1;
		}
	}
return -1;
}

int existeNum(FUNC funcs[], int tot, int num){ // verficar se existe numero - algoritmo de pesquisa sequencial
	int i=0;
	for(i=0;i<tot;i++){
		if(funcs[i].num==num){
		return(i+1);
		}
	}
return -1;
}

int alteraValores(FUNC funcs[], int tot, int num){ // altera o salario de um funcionario (num)
	int i=0;
	for(i=0;i<=tot;i++){
		if(funcs[i].num==num){
			printf("Introduza o valor do salario\n");
			scanf("%f", &funcs[i].salario);
		return 0;
		}
	}
return -1;
}

int gravaDados(FUNC funcs[], int tot){ // grava dados para ficheiro binario
	FILE *fp=NULL;
	long res=0;
	fp=fopen("quinta.dat","wb");
	if(fp==NULL){
		printf("Erro ao abrir o ficheiro\n");
	return -1;
	}
	fwrite(&tot, sizeof(int), 1, fp);
	res=fwrite(&funcs[0], sizeof(FUNC), tot, fp);
	fclose(fp);
	printf("Gravou %ld registos\n", res);
return 0;
}

int lerDados(FUNC funcs[]){ // ler os dados previamente gravados em binario
	FILE *fp=NULL;
	int totAux=0;
	lonf res=0;
	fp=fopen("quinta.dat", "rb");
	if(fp==NULL){
		printf("Não abriu o ficheiro\n");
	return 0;
	}
	res=fread(&totAux, sizeof(int), 1, fp);
	if(res>0 && totAux>=0){
		res=fread(&funcs[0], sizeof(FUNC), totAux, fp);
		printf("Leu %ld registos\n", res);
	}
return totAux;
}

int main(int argc, char *argv[]) {
	FUNC funcionario[MAX];
	int totFunc=0, opcao=0, res=0, nif=0, auxi=0;
	char nome[100];
	float aux=0;
	totFunc=lerDados(funcionarios);
	do{
		opcao=menu();
		switch(opcao){
			case 1: totFunc+=recebeDados(funcionarios, totFunc);
				break;
			case 2: listarDados(funcionarios, totFunc);
				break;
			case 3: ordenarPorNome(funcionarios, totFunc);
				break;
			case 4: ordenarPorNIF(funcionarios, totFunc);
				break;
			case 5: ordenarPorNome(funcionarios, totFunc);
				gravarFile(funcionarios, totFunc);
				break;
			case 6: ordenarSalarios(funcionarios, totFunc);
				break;
			case 7:
				ordenaPorNome(funcionarios, totFunc);
				printf("\nIntroduza o nome a procurar: \n");
				fflush(stdin);
				gets(nome);
				res=existeNome(funcionarios, totFunc, nome);
				if(res<=0){
					printf("O nome %s não existe\n", nome);
				}
				else{
					printf("O nome %s existe na posição %i", nome, res);
				}
				break;
			case 8: ordenaPorNIF(funcionarios, totFunc);
				printf("Introduza o NIF a procurar\n");
				scanf("%i", &nif);
				res=existeNIF(funcionarios, totFunc, nif);
				if(res<=0){
					printf("O NIF %i não existe\n", nif);
				}
				else{
					printf("O NIF %i encontra-se na posição %i", nif, res);
				}
				break;
			case 9: printf("\nIntroduza")
			case 11: printf("Introduza o valor: \n");
				scanf("&f", aux);
				ListaValSup(funcionarios, totFunc);
				break;
			case 0: printf("A sair\n");
				break;
			default: printf ("Opção errada");
				break;
		}
	} while(opcao!=0);
return 0;
}
