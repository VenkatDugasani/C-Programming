//2. Write a program to print size of pointer variables.
#include<stdio.h>

int main(){
    int *p1;
    float *p2;
    double *p3;
    char *p4;

    printf("size of int pointer = %zu bytes\n", sizeof(p1));
    printf("size of float pointer = %zu bytes\n", sizeof(p2));
    printf("size of double pointer = %zu bytes\n", sizeof(p3));
    printf("size of char pointer = %zu bytes\n", sizeof(p4));

    return 0;
}