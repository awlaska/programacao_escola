//
//  main.c
//  Pesquisa
//
//  Created by Pedro Coutinho on 25/03/2020.
//  Copyright © 2020 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define N 5
#define NA 4
#define NNOME 50
#define FICHEIRO_LOG "dados.log"
#define FICHEIRO_BIN "dados.bin"

typedef struct{
    int numero;
    char nome[NNOME];
} ALUNO;

int log_aluno(ALUNO *a, char *nome_ficheiro)
{
    FILE *fp;
    int estado; //0-erro, 1-ok
    
    if((fp=fopen(nome_ficheiro,"a"))==NULL)
    {
        estado = 0;
    }
    else
    {
        fprintf(fp,"Aluno Inserido: %d-%s\n",a->numero,a->nome);
        fclose(fp);
        estado = 1;
    }
    return estado;
}

int gravar(ALUNO *alunos, int limite, char *nome_ficheiro)
{
    FILE *fp;
    int estado; //0-erro, 1-ok
    
    //tentar abrir o ficheiro
    if((fp=fopen(nome_ficheiro,"wb"))==NULL)
    {
        estado = 0;
    }
    else
    {
        //Alternativa 1: gravar no ficheiro o número de alunos gravado
        //fwrite(&limite,sizeof(int),1,fp);
        //Alternativa 2: calcular número de alunos com base no tamanho do ficheiro
        //não é necessário gravar nada extra em ficheiro
        fwrite(alunos,sizeof(ALUNO),limite,fp);
        fclose(fp);
        estado = 1;
    }
    return estado;
}

int carregar(ALUNO *alunos, int *apt_limite, char *nome_ficheiro)
{
    FILE *fp;
    int estado; //0-erro, 1-ok
    long int tamanho;
    
    //tentar abrir o ficheiro
    if((fp=fopen(nome_ficheiro,"rb"))==NULL)
    {
        estado = 0;
    }
    else
    {
        //Alternativa 1: ler do ficheiro o número de alunos gravado
        //fread(apt_limite,sizeof(int),1,fp);
        
        //Alternativa 2: calcular número de alunos com base no tamanho do ficheiro
        fseek(fp,0L,SEEK_END);                      //posicionar no final do ficheiro
        tamanho=ftell(fp);                          //obter o tamanho do ficheiro (posição atual)
        *apt_limite=(int)tamanho/sizeof(ALUNO);     //calcular o número de estruturas ALUNO no ficheiro
        fseek(fp,0L,SEEK_SET);                      //voltar a posicionar no início do ficheiro para leitura
        
        fread(alunos,sizeof(ALUNO),*apt_limite,fp); //ler número de alunos calculado
        fclose(fp);
        estado = 1;
    }
    return estado;
}

int carregar_texto(ALUNO *alunos, int *apt_limite, const char *nome_ficheiro)
{
    FILE *fp;
    int estado; //0-erro, 1-ok, 2-erro ficheiro log
    
    //tentar abrir o ficheiro
    if((fp=fopen(nome_ficheiro,"r"))==NULL)
        estado=0;
    else
    {
        estado = 1;
        //ler sequencialmente do ficheiro até fim de ficheiro
        while(estado==1 && *apt_limite<NA && fscanf (fp,"%d %s",&(alunos[*apt_limite].numero),alunos[*apt_limite].nome)!=EOF)
        {
            if (!log_aluno(&alunos[(*apt_limite)++],FICHEIRO_LOG))
                estado = 2;
            
        }
        fclose(fp);
    }
    return estado;
}

int escreve_logs(const char *nome_ficheiro)
{
    FILE *fp;
    int estado; //0-erro, 1-ok
    char linha[NNOME+20]; // folga de 20 carateres para numero e ifen
    
    //tentar abrir o ficheiro
    if((fp=fopen(nome_ficheiro,"r"))==NULL)
        estado=0;
    else
    {
        //ler sequencialmente do ficheiro até fim de ficheiro
        while(fgets(linha,NNOME+20,fp)!=NULL)
        {
            printf("%s",linha);
        }
        fclose(fp);
        estado = 1;
    }
    return estado;
}

void escreve_aluno(ALUNO *a){
    printf("Número do aluno: %d\n",a->numero);
    printf("Nome do aluno: %s\n",a->nome);
}

void escreve_alunos(ALUNO *as, int lim){
    int i;
    for(i=0;i<lim;i++){
        escreve_aluno(as+i);
    }
}

void le_aluno(ALUNO *a){
    printf("Número do aluno: ");
    scanf("%d", &a->numero);
    printf("Nome do aluno:");
    fflush(stdin);
    scanf("%s",a->nome);
    if (!log_aluno(a,FICHEIRO_LOG))
        printf("Erro na gravação do ficheiro de logs %s!\n",FICHEIRO_LOG);
}

void mostra_menu()
{
    printf("1-Inserir aluno\n");
    printf("2-Listar alunos\n");
    printf("3-Ver Logs\n");
    printf("4-Guardar ficheiro(binário)\n");
    printf("5-Carregar ficheiro(binário)\n");
    printf("6-Ordena por número (bubble sort)\n");
    printf("7-Ordena por nome (bubble sort)\n");
    printf("8-Ordena por número (selection sort)\n");
    printf("9-Ordena por nome (selection sort)\n");
    printf("10-Pesquisa por número (sequencial linear não ordenado)\n");
    printf("11-Pesquisa por nome (sequencial linear não ordenado)\n");
    printf("12-Pesquisa por número (sequencial linear ordenado)\n");
    printf("13-Pesquisa por nome (sequencial linear ordenado)\n");
    printf("14-Pesquisa por número (binária)\n");
    printf("15-Pesquisa por nome (binaria)\n");
    printf("0-Sair\n    ");
    printf("Escolha a opção: ");
}

void bubbleSortNumeroAulaTeorica(ALUNO *turma, int limite)
{
    ALUNO a_temp;
    int i, j;
    
    for (i=0; i < limite; i++)
    {
        for (j=0; j < limite-1 ; j++)
        {
            if (turma[j].numero > turma[j+1].numero)
            {
                a_temp = turma[j];
                turma[j] = turma[j+1];
                turma[j+1] = a_temp;
            }
            printf("Iteração %d-%d\n",i,j);
            escreve_alunos(turma, limite);
            getchar();
        }
    }
}

void bubble_sort_numero_v1(ALUNO *turma, int limite)
{
    ALUNO a_temp;
    int i, j;
    
    for(i=0;i<limite-1;i++)
    {
        for(j=0;j<limite-1-i;j++)
        {
            if (turma[j].numero > turma[j+1].numero)
            {
                a_temp = turma[j];
                turma[j] = turma[j+1];
                turma[j+1] = a_temp;
            }
            printf("Iteração %d-%d\n",i,j);
            escreve_alunos(turma, limite);
            getchar();
        }
    }
}

void bubble_sort_nome_v1(ALUNO *turma, int limite)
{
    ALUNO a_temp;
    int i, j;
    
    for(i=0;i<limite-1;i++)
    {
        for(j=0;j<limite-1-i;j++)
        {
            //if (turma[j].numero > turma[j+1].numero)
            if (strcmp(turma[j].nome,turma[j+1].nome)>0)
            {
                a_temp = turma[j];
                turma[j] = turma[j+1];
                turma[j+1] = a_temp;
            }
            printf("Iteração %d-%d\n",i,j);
            escreve_alunos(turma, limite);
            getchar();
        }
    }
}


void bubble_sort_numero_v2(ALUNO *turma, int limite)
{
    unsigned int i,j,n_trocas;
    ALUNO a_temp;
    
    i = 1;  /* Inicializar o limite superior de ordenação */
    do
    {
        n_trocas = 0;  /* Inicializar o contador de trocas */
        for (j = limite-1; j >= i; j--){
            if (turma[j-1].numero > turma[j].numero)
            {
                a_temp = turma[j];
                turma[j] = turma[j+1];
                turma[j+1] = a_temp;
                n_trocas++;  /* Actualizar o n˙mero de trocas efectuadas */
            }
            printf("Iteração %d-%d\n",i,j);
            escreve_alunos(turma, limite);
            getchar();
        }
        i++;  /* Actualizar o limite superior de ordenação */
    } while (n_trocas && i < limite);
}

void selection_sort_numero(ALUNO *turma, int limite)
{
    ALUNO a_temp;
    int i, j, minimo;
    
    for(i=0;i<limite-1;i++)
    {
        minimo = i;
        for(j=i;j<limite;j++)
        {
            //if (turma[j].numero < turma[minimo].numero)
            // turma[j].numero É O MESMO QUE (*(turma+j)).numero É O MESMO QUE (turma+j)->numero
            //if ((turma+j)->numero < (turma+minimo)->numero)
            if (turma[j].numero < turma[minimo].numero)
                minimo = j;
        }
        if (minimo != i)
        {
            a_temp = turma[i];
            turma[i] = turma[minimo];
            turma[minimo] = a_temp;
        }
        printf("Iteração %d-%d\n",i,j);
        escreve_alunos(turma, limite);
        getchar();
    }
}

void selection_sort_nome(ALUNO *turma, int limite)
{
    ALUNO a_temp;
    int i, j, minimo;
    
    for(i=0;i<limite-1;i++)
    {
        minimo = i;
        for(j=i;j<limite;j++)
            if (strcmp(turma[j].nome,turma[minimo].nome)<0)
                minimo = j;
        if (minimo != i)
        {
            a_temp = turma[i];
            turma[i] = turma[minimo];
            turma[minimo] = a_temp;
        }
        printf("Iteração %d-%d\n",i,j);
        escreve_alunos(turma, limite);
        getchar();
    }
}


int procura_numero_sequencial_nao_ordenado(ALUNO *turma, int limite, int numero_procura)
{
    int i;
    
    for(i=0;i<limite;i++)
    {
        if(turma[i].numero == numero_procura) return i;
    }
    return -1;
}

int procura_nome_sequencial_nao_ordenado(ALUNO *turma, int limite, char *nome_procura)
{
    int i;
    
    for(i=0;i<limite;i++)
    {
        if(!strcmp(turma[i].nome,nome_procura)) return i;
    }
    return -1;
}

int procura_numero_sequencial_ordenado(ALUNO *turma,int limite,int numero_procura)
{
    int i;
    
    for(i=0;i<limite && turma[i].numero<=numero_procura;i++)
    {
        if(turma[i].numero==numero_procura) return i;
    }
    return -1;
}

int procura_nome_sequencial_ordenado(ALUNO *turma,int limite,char *nome_procura)
{
    int i;
    
    for(i=0;i<limite && strcmp(turma[i].nome,nome_procura)<=0;i++)
    {
        if(!strcmp(turma[i].nome,nome_procura)) return i;
    }
    return -1;
}

int procura_numero_binaria(ALUNO *turma,int limite,int numero_procura)
{
    int meio, inicio, fim;
    
    inicio=0;
    fim=limite-1;
    while (inicio <= fim)
    {
        meio=(inicio+fim)/2;
        if (turma[meio].numero == numero_procura)
        {
            return meio;
        }
        if (turma[meio].numero > numero_procura)
        {
            fim=meio-1;
        }
        else
        {
            inicio=meio+1;
        }
    }
    return -1;
}

int procura_nome_binaria(ALUNO *turma,int limite,char *nome_procura)
{
    int meio, inicio, fim;
    
    inicio=0;
    fim=limite-1;
    while (inicio <= fim)
    {
        meio=(inicio+fim)/2;
        if (!strcmp(turma[meio].nome,nome_procura))
        {
            return meio;
        }
        if (strcmp(turma[meio].nome,nome_procura)>0)
        {
            fim=meio-1;
        }
        else
        {
            inicio=meio+1;
        }
    }
    return -1;
}


int main(int argc, const char * argv[]) {
    ALUNO turma[NA];
    int opcao;
    int numero_alunos;
    int i;
    int numero_procura;
    char nome_procura[NNOME];
    
    numero_alunos=0;
    if(argc>1)
    {
        if (!carregar_texto(turma,&numero_alunos,argv[1]))
            printf("Erro na leitura do ficheiro de texto ou gravação no ficheiro de log (%s)!\n",FICHEIRO_LOG);
    }
    do
    {
        mostra_menu();
        scanf("%d",&opcao);
        switch (opcao)
        {
            case 1:   //Inserir aluno
                if(numero_alunos<NA)
                    le_aluno(&turma[numero_alunos++]);
                else
                    printf("Atingido número máximo de alunos");
                break;
            case 2:   //Listar alunos
                escreve_alunos(turma,numero_alunos);
                break;
            case 3:   //Ver logs
                escreve_logs(FICHEIRO_LOG);
                break;
            case 4: //Guardar ficheiro(binário)
                if (!gravar(turma,numero_alunos,FICHEIRO_BIN))
                    printf("Erro na gravação no ficheiro binário!\n");
                break;
            case 5: //Carregar ficheiro(binário)
                if (!carregar(turma,&numero_alunos,FICHEIRO_BIN))
                    printf("Erro na leitura do ficheiro binário!\n");
                break;
            case 6:   //Ordena por número (bubble sort)
                //bubbleSortNumeroAulaTeorica(turma,numero_alunos);
                bubble_sort_numero_v1(turma,numero_alunos);
                break;
            case 7:   //Ordena por nome (bubble sort)
                bubble_sort_nome_v1(turma,numero_alunos);
                break;
            case 8:   //Ordena por numero (selection sort)
                selection_sort_numero(turma,numero_alunos);
                break;
            case 9:   //Ordena por nome (selection sort)
                selection_sort_nome(turma,numero_alunos);
                break;
            case 10:   //Pesquisa por número (sequencial linear não ordenado)
                printf("Qual o número a pesquisar?");
                scanf("%d",&numero_procura);
                /*
                //implementação sem funções
                for(i=0;i<numero_alunos;i++)
                {
                    if(turma[i].numero == numero_procura) break;
                }
                // não existe o numero_procura    Qual o valor de i? igual a numero_alunos
                // existe o numero_procura        Qual o valor de i? igual a [0..numero_aluno-1]
                if(i<numero_alunos)
                {
                    printf("Existe na posição %d",i+1);
                }
                else
                {
                    printf("Não existe");
                }
                */
                //implementação com funções
                i=procura_numero_sequencial_nao_ordenado(turma,numero_alunos,numero_procura);
                if (i!=-1) printf("Existe na posição %d",i);
                else printf("Não existe");
                break;
            case 11:   //Pesquisa por nome (sequencial linear não ordenado)
                printf("Qual o nome a pesquisar?");
                gets(nome_procura);
                i=procura_nome_sequencial_nao_ordenado(turma,numero_alunos,nome_procura);
                if (i!=-1) printf("Existe na posição %d",i);
                else printf("Não existe");
                break;
            case 12:   //Pesquisa por número (sequencial linear ordenado)
                printf("Qual o número a pesquisar?");
                scanf("%d",&numero_procura);
                i=procura_numero_sequencial_ordenado(turma,numero_alunos,numero_procura);
                if (i!=-1) printf("Existe na posição %d",i);
                else printf("Não existe");
                break;
            case 13:   //Pesquisa por nome (sequencial linear ordenado)
                printf("Qual o nome a pesquisar?");
                gets(nome_procura);
                i=procura_nome_sequencial_ordenado(turma,numero_alunos,nome_procura);
                if (i!=-1) printf("Existe na posição %d",i);
                else printf("Não existe");
                break;
            case 14:   //Pesquisa por número (binária)
                printf("Qual o número a pesquisar?");
                scanf("%d",&numero_procura);
                i=procura_numero_binaria(turma,numero_alunos,numero_procura);
                if (i!=-1) printf("Existe na posição %d",i);
                else printf("Não existe");
                break;
            case 15:   //Pesquisa por nome (binária)
                printf("Qual o nome a pesquisar?");
                gets(nome_procura);
                i=procura_nome_binaria(turma,numero_alunos,nome_procura);
                if (i!=-1) printf("Existe na posição %d",i);
                else printf("Não existe");
                break;
            case 0:
                printf("Bye!");
        }
    } while(opcao!=0);
    return 0;
}

//Notas sobre notação de apontadores com arrays
//&as[0]     as
//&as[1]     as+1
//&as[i]     as+i

//as[0]      *(as+0)
//as[1]      *(as+1)
//as[i]      *(as+i)

