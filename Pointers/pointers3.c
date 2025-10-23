//Write a program to print size of pointer variables and size of values Dereferenced by them.

#include<stdio.h>
int main(){
    int *p1;
    float *p2;
    double *p3;
    char *p4;

    printf("Size of int pointer (p1)      : %zu bytes\n", sizeof(p1));
    printf("Size of float pointer (p2)      : %zu bytes\n", sizeof(p2));
    printf("Size of double pointer (p3)      : %zu bytes\n", sizeof(p3));
    printf("Size of char pointer (p4)      : %zu bytes\n", sizeof(p4));

    

    printf("Size of value *p1 (int)     : %zu bytes\n", sizeof(*p1));
    printf("Size of value *p2 (float)     : %zu bytes\n", sizeof(*p2));
    printf("Size of value *p3 (double)     : %zu bytes\n", sizeof(*p3));
    printf("Size of value *p4 (char)     : %zu bytes\n", sizeof(*p4));

}