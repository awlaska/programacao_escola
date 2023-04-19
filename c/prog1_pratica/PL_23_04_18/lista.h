#ifndef _LISTA
#define _LISTA4

typedef struct colaborador {
    char nome[64];
    int numero;
    long int NIF;
    char dt_nascimento[256];
    float salario;
}COL;

typedef struct elemento{
    COL info;
    struct elemento *seguinte;
}ELEM;

int inserirColaborador(ELEM **iniLista, COL info);

void listarColaboradores(ELEM *iniLista);

#endif //_LISTA

