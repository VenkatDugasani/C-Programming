/* Program to understand the difference between a to an integer and a pointer to an array of
integers.*/

#include<stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};

    int *p;
    int (*q)[5];

    p = arr;
    q = &arr;

    printf("=== Poiner to int (p) ===\n");
    printf("Value of p    : %p\n", (void*)p);
    printf("Value at *p   : %d\n", *p);
    printf("Address of p + 1 : %p (moves by 4 bytes)\n\n", (void*)(p + 1));

    printf("=== Pointer to an array (q) ===\n");
    printf("Value of q   : %p\n", (void*)q);
    printf("Value at *q  : %p (first element of array)\n", (void*)(*q));
    printf("Address of q + 1  : %p (moves by 20 bytes = 5 * sizeof(int))\n\n", (void*)(q+1));

    printf("=== Accessing Elements ===\n");
    printf("Using p (int pointer) : *(p + 2) = %d \n", *(p + 2));
    printf("Using q (array ptr)   : *(*q + 2) = %d \n", *(*q + 2));


    return 0;
}