#include <stdio.h>
#include <math.h>

int main() {
    float niveis, dificuldade, meio, meio_nivel;
    printf("Número de níveis: ");
    scanf("%f", niveis);

    dificuldade = 2^niveis;
    meio = dificuldade/2;
    meio_nivel = log(meio);
    return 0;
}
