//Write a program to dereference a pointer to an array.

#include<stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int (*p)[5];
    p = &arr;

    printf("Base address of arr (&arr) : %p\n", (void*)&arr);
    printf("Value of p (address it holds) : %p\n", (void*)p);
    printf("Value of *p (decays to arr) : %p\n\n", (void*)(*p));

    printf("=== Dereferencing Pointer to Array ===\n");
    for(int i = 0; i < 5; i++){
        printf("(*p)[%d] = %d\tAddress : %p\n", i, (*p)[i], (void*)&(*p)[i]);
    }
}