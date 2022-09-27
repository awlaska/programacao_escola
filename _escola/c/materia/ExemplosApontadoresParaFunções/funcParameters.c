//
//  main.c
//  funcParameters
//
//  Created by Pedro Coutinho on 29/04/2020.
//  Copyright © 2020 Pedro Coutinho. All rights reserved.
//

#include <stdio.h>

void print1(int i)
{
    printf("Print1: %d\n",i);
}

void print2(int i)
{
    printf("Print2: %d\n",i);
}

void print3(int i)
{
    printf("**************\n");
    printf("* valor é %d *\n",i);
    printf("**************\n");
}

void grava(int i)
{
    FILE *fp;
    fp = fopen("dados.txt","w");
    fprintf(fp,"%d",i);
    fclose(fp);
}

void func(void (*f)(int), int x)
{
    f(x);
}
	
int main(int argc, const char * argv[]) {
    int x=5;
    printf("Resultado:\n");
    
    func(print1,1);
    
    func(print2,2);
    
    func(print3,x);
    
    func(grava,x);
    
    return 0;
}
