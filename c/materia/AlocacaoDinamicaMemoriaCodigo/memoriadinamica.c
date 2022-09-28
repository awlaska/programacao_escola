//
//  main.c
//  Memória Dinâmica
//
//  Created by Pedro Coutinho on 31/03/2020.
//  Copyright © 2020 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
#define NA 4
#define NNOME 50
#define FICHEIRO_LOG "dados.log"
#define FICHEIRO_BIN "dados.bin"

typedef struct{
    int numero;       //4 bytes
    char nome[NNOME]; //50 bytes
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
    printf("-1-Reset ao programa (limpar variáveis)\n");
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
    
    //------------------------------------------------------
    //    //ALGUMAS NOTAS SOBRE APONTADORES (apenas procura esclarecer o tipo de apontador)
    //    int *apt_i;     //1000 1001 1002 1003
    //    // * = apontador para... ex: int * lê-se apontador para inteiro
    //
    //    int vi = 10;    //por exemplo, variável "vi" na zona de memória 1000 com o valor 10 (binário 1010)
    //                    //                                 1000     1001     1002     1003
    //                    // 10 está na zona 1000-1003     00000000 00000000 00000000 00001010
    //
    //    apt_i = &vi;  //apt_i fica com valor 1000 (endereço de memória da variável "vi")
    //
    //    vi = 1;     // alteração do conteúdo da variável "vi" diretamente, com o valor 1 (binário 1)
    //                //                                 1000     1001     1002     1003
    //                // 1 fica na zona 1000-1003      00000000 00000000 00000000 00000001
    //
    //    *apt_i = 1; // alteração do conteúdo da variável "vi" indiretamente a partir do seu apontador apt_i, com o valor 1 (binário 1)
    //                //                                 1000     1001     1002     1003
    //                // 1 fica na zona 1000-1003      00000000 00000000 00000000 00000001
    //    // * = conteúdo de... ex: *apt_i lê-se o conteúdo de apt_i (a partir do endereço dado por apt_i num tamanho de acordo com a declaração (inteiro no exemplo, porque foi declarado como int *)
    //
    //    //aritmérica de apontadores
    //    apt_i = apt_i+1; // 1000 + sizeof(int) = 1000 + 4 = 1004
    //------------------------------------------------------
    

    //NOTA: será necessário rever a leitura a partir de ficheiro de forma a garantir que há
    //      espaço suficiente para carregar os alunos todos. Se não houver, será necessário
    //      alocar/realocar memória dinâmica.
    
    //ALUNO turma[NA];  //Alocação estática de memória
    ALUNO *turma;       //Variável preparada para ser usada na alocação dinâmica de memória
    int na;             //Utilizador pode definir previsão de número de alunos
    int na_aux;         //Variável de controlo do espaço efetivamente reservado
                        //pois sempre que se esgota o espaço, é reservado novo bloco de "na" ALUNO
    
    int opcao;
    int numero_alunos;
    int i;
    int numero_procura;
    char nome_procura[NNOME];
 
    printf("Quantos alunos pretende?");
    scanf("%d",&na);
    na_aux=na;
    
    //Alocação dinâmica de memória para o array de "na" (ou na_aux no início) estruturas do tipo ALUNO
    
    //Com recurso a malloc()
    // tamanho estrutura ALUNO: sizeof(ALUNO)
    // quantas estruturas: na_aux
    // tamanho de memória a reservar: na_aux*sizeof(ALUNO)
    turma=(ALUNO*)malloc(na_aux*sizeof(ALUNO));
    //Alternativa: calloc()
    //turma=(ALUNO*)calloc(na_aux,sizeof(ALUNO));
    
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
            case -1: // reset às variáveis do programa
                //liberta espaço de memória alocado
                free(turma);
                //reset da variável de número de estruturas reservado
                na_aux = na;
                //alocação com malloc() do espaço de memória inicial de "na" (ou na_aux) estruturas do tipo ALUNO
                turma=(ALUNO*)malloc(na_aux*sizeof(ALUNO));
                //alternativa com calloc()
                //turma=(ALUNO*)calloc(na_aux,sizeof(ALUNO));
                //reset da variável do número de alunos
                numero_alunos = 0;
                break;
             case 1:   //Inserir aluno
                //Verifica se o ainda tem espaço para guardar mais alunos.
                //Se não tiver, volta a reservar o bloco de "na" estruturas do tipo ALUNO extra
                //Poderia ser reservado apenas mais UM aluno, mas adotou-se
                //a estratégia de reservar logo um bloco de "na" estruturas do tipo ALUNO.
                if(numero_alunos>=na_aux)
                {
                    //printf("Atingido número máximo de alunos");
                    na_aux = na_aux + na;
                    //realocação de memória para mais um determinado número de bytes, preservando o conteúdo dos que já tinham sido reservados anteriormente
                    turma=(ALUNO *)realloc(turma,na_aux*sizeof(ALUNO));
                }
                le_aluno(&turma[numero_alunos++]);
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

