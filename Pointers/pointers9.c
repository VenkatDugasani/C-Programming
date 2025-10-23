//Write a program to print the value of array elements using pointers and subscript notation.

#include<stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Address of arr(base)  : %p\n\n", (void*)arr);
    printf("Index   | Address of Element | Pointer Notation | Subscript Notation\n");
    printf("---------------------------------------------------------------------\n");

    for(int i = 0; i < 5; i++){
        printf("%5d | %18p | %16d | %18d\n", i, (void*)(p + i), *(p + i), p[i]);
    }
    return 0;
}