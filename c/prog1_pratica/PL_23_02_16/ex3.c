#include <stdio.h>

float calMediaValores(float valoresSS[]){
    float media = 0.0f;
    for(int i = 0; i < 8; i++){
        media = media + valoresSS[i];
    }
    return media = media/8;
}

float ex3(){
    float valoresSS[8];
    valoresSS[0] = 80;
    valoresSS[1] = 95;
    valoresSS[2] = 90;
    valoresSS[3] = 80;
    valoresSS[4] = 90;
    valoresSS[5] = 85;
    valoresSS[6] = 80;
    valoresSS[7] = 90;

    printf("%.2f", calMediaValores(valoresSS));
    return 0;
}