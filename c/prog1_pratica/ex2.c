#include <stdio.h>

int ex2(){
    int count = 0;
    for(int ano = 1900; ano <= 2022; ano++){
        if(ano%4 != 0 && ano%6 == 0){
            printf("%i\n", ano);
            count ++;
        }
    }

    printf("Contagem: %i", count);
    return 0;
}

int ex2_2(){
    int count = 0;
    int i = 1900;
    while(i <= 2022){
        if(i%4 != 0 && i%6 == 0){
            printf("%i\n", i);
            count ++;
        }
        i++;
    }

    printf("Contagem: %i", count);
    return 0;
}