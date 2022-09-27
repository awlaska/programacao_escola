#include <stdio.h>

main () {
    int c;
    float f;
    printf("Temperatura Cº?");
    scanf("%i", & c);
    f = c * 1.8 + 32;
    printf("%i C = %f F", c, f);
}