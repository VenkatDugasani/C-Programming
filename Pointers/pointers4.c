//Write a program to illustrate the dereferencing of pointers

#include<stdio.h>

int main(){
    int a = 10;
    int *p;
    int **pp;

    p = &a;
    pp = &p;

    printf("Value of a   = %d\n", a);
    printf("Address of a (&a)    = %p\n", (void*)&a);


    printf("Value of p (address of a)  = %p\n", (void*)p);
    printf("Value pointed by p (*p) = %d\n", *p);
    printf("Address of p (&p) = %p\n", (void*)&p);

    printf("Value of pp (address of p) = %p\n", (void*)pp);
    printf("Value pointed by *pp (**pp) = %d\n", **pp);
    printf("Value pointed by pp (*pp) = %p\n", (void*)*pp);
    
}