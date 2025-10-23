// C program to illustrate pointer arithmetic

#include<stdio.h>

int main(){
    int arr[4]= {2, 3, 4, 5};
    int *p = arr;

    printf("Base Address (p)  : %p\n", (void*)p);
    printf("Value at p (*p) : %d\n", *p);
    printf("-----------------------------------\n");

    p++;
    printf("After p++ (Address of p)  : %p\n", (void*)p);
    printf("After p++ Value of (*p) : %d\n", *p);
    printf("-----------------------------------\n");


    p = p + 2;
    printf("After p + 2 (Address of p)  : %p\n", (void*)p);
    printf("After p + 2 Value of (*p) : %d\n", *p);
    printf("-----------------------------------\n");

    p--;
    printf("After p-- (Address of p)  : %p\n", (void*)p);
    printf("After p-- Value of (*p) : %d\n", *p);

    return 0;
}