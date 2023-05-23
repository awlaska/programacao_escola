typedef struct info{
    int num;
    char nome[50];
    char pais[50];
    char inst[50];
    float valorPago;
}INFO;

typedef struct elemento{
    struct elemento *anterior;
    INFO info;
    struct elemento *seguinte;
}ELEMENTO;