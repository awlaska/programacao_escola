/*--------------------------------------------------*/
/*$$$$ 03-03-2021                               $$$$*/
/*$$$$ autor:  Alexandre Santos                 $$$$*/
/*--------------------------------------------------*/
/*@@@@ DIRECTIVAS DE INCLUS?O                   @@@@*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM_MATRICULA 9
#define TAM_MARCA 20
#define TAM_MODELO 30

#define ERRO_DADOS_INVALIDOS -3
#define ERRO_DADOS -2
#define ERRO_MEMORIA -1
#define ERRO_LISTA_VAZIA -1
#define OK 1

typedef struct veiculo{
	char matricula[TAM_MATRICULA];
	char marca[TAM_MARCA];
	char modelo[TAM_MODELO];
	int ano;
	float preco;
} VEICULO;

typedef VEICULO INFO;

typedef struct elem{
	INFO info;
	struct elem *next;
}ELEMENTO;

int validar_veiculo(VEICULO *v)
{
	if(v->ano<2000) return 0;
	return 1;
}

void menu(){
	printf("---------------------------------\n");
    printf("|1- Inserir\t\t\t|\n");				//Feito
    printf("|2- Listar\t\t\t|\n");				//Feito
    printf("|3- Pesquisar matricula\t\t|\n");
    printf("|4- Valor total de veículos\t|\n");
    printf("|5- Quantidade de carros\t|\n");
    printf("|6- Media dos preços\t\t|\n");
    printf("|7- Remover veiculo\t\t|\n");
    printf("|8- Listar acima de um valor\t|\n");
	printf("|9- Aumentar preço\t\t|\n");
	printf("|0- Sair\t\t\t|\n");
	printf("---------------------------------\n");
}

void escrever_veiculo(VEICULO *v)
{
    printf("--------------------\n");
    printf("Matricula: %s\n",v->matricula);
    printf("Marca: %s\n",v->marca);
    printf("Modelo: %s\n",v->modelo);
    printf("Ano: %d\n",v->ano);
    printf("Preço: %.2f\n",v->preco);
    printf("--------------------\n");
}

void ler_veiculo(VEICULO *v)
{
    printf("--------------------\n");
    printf("Matricula? ");
    scanf("%s",v->matricula);
    printf("Marca? ");
    scanf("%s",v->marca);
    printf("Modelo? ");
    scanf("%s",v->modelo);
    printf("Ano? ");
    scanf("%d",&(v->ano));
    printf("Preço? ");
    scanf("%f",&(v->preco));
    printf("--------------------\n");
}

//Inserir na lista
int inserir_lista_ligada_inicio(ELEMENTO **apt_l, INFO *apt_info, int (*validar)(INFO *))
{
    ELEMENTO *novo;

    if(apt_info==NULL) return ERRO_DADOS;

    if(validar!=NULL && (*validar)(apt_info)==0) return ERRO_DADOS_INVALIDOS;

    novo = (ELEMENTO *)malloc(sizeof(ELEMENTO));
    if (novo==NULL) return ERRO_MEMORIA;

    novo->info = *apt_info;
    novo->next = *apt_l;
    *apt_l = novo;
    return OK;
}

//Listar a lista
void listar_lista_ligada(ELEMENTO *l, void (*escrever)(INFO *))
{
    ELEMENTO *ptr;
    
    ptr=l;
    while(ptr!=NULL)
    {
        (*escrever)(&(ptr->info));
        ptr=ptr->next;
    }
}

void totVeiculos(ELEMENTO **inilista){
	ELEM *aux=NULL;
	int count=0;
	
	for(aux=inilista; aux!=NULL; aux=aux->next){
		count++;
	}
	return count;
}

int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "Portuguese");
	    
    ELEMENTO *lista_veiculos = NULL;
	INFO info_veiculo;
    int resultado;
	int op;

	do{      
		menu();
	    printf("Opção: ");
	    scanf("%d", &op);  
			switch(op){
				case 1:{
					ler_veiculo(&info_veiculo);
						resultado=inserir_lista_ligada_inicio(&lista_veiculos,&info_veiculo,validar_veiculo);
						    if(resultado==OK) printf("Inserção com sucesso\n");
						    else printf("Inserção sem sucesso (ERRO %d)\n",resultado);
					break;
				}
				case 2:{       
		    		listar_lista_ligada(lista_veiculos,escrever_veiculo); 
					break;
				}
				case 3:{
					//pesquisar matricula, imprimir dados do carro com essa matricula
					break;
				}
				case 4:{
					//calcular valor total dos veiculos existentes com recursividade, imprimir total
					break;
				}
				case 5:{
					//imprimir quantidade de carros que a empresa tem
					break;
				}
				case 6:{
					//calcular media dos preços dos veiculos existentes, imprimir media
					break;
				}
				case 7:{
					//remover veiculo da lista, indicar matricula do veiculo a remover
					break;
				}
				case 8:{
					//Listar veiculos acima de um determinado valor
					break;
				}
				case 9:{
					//Aumentar o preço dos veículos de uma determinada marca, valor percentual introduzido
					break;
				}
				case 0:{
					//sair
					break;
				}
			}
	}while (op != 0);

    return 0;
}
/*--------------------------------------------------*/// SEQU?NCIA L?GICA DE INSTRU??ES













