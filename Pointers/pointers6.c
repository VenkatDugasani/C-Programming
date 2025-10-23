/* Write a program to declare an integer variable a, assign it a value, then declare a pointer
variable, assign it the address of a, and finally print the value of a using the pointer variable. */

#include<stdio.h>

int main(){
    int a = 25;
    int* p;
    p = &a;

    printf("Value of a directly     : %d\n", a);
    printf("Address of a            : %p\n", (void*)&a);
    printf("Value of p              : %p\n", (void*)p);
    printf("Value of *p(Dereferenced): %d", *p);

    return 0;
}