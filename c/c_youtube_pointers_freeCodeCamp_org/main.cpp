#include <iostream>

int main() {
    int a;
    int *p;
    a = 10;
    p = &a; // &a = address of a
    int b = 20;

    printf("Address of p is %d\n", p);
    printf("Value at p is %d\n", *p); // *p = value at address pointed by p
    printf("Address of a is %d\n", &a);

    printf("\n");
    printf("-------------------------------");
    printf("\n");

    *p = 12; // a = 12 - dereferencing
    printf("Value of a is %d\n", a);

    printf("\n");
    printf("-------------------------------");
    printf("\n");

    *p = b; // Will address in p change to point b? No. It will put the value of b inside a
    p = &b;
    printf("Address of p is %d\n", p);
    printf("Value at p is %d\n", *p);

    printf("\n");
    printf("-------------------------------");
    printf("\n");

    a = 10;
    int *q;
    q = &a;
    // pointer arithmetic
    printf("Address p is %d\n", p); // p = 2002
    printf("Value at address p is %d\n", *p); // *p = 10
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address p + 1 is %d\n", p+1); //p + 1 = 2006, int is 4 bytes
    printf("Value at address p + 1 is ");
    printf("Address p + 2 is %d\n", p+2); //p + 2 = 2010, int is 4 bytes


}