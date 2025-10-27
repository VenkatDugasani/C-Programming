//Write a program to print array of pointer

#include<stdio.h>

int main(void){
    int a = 10, b = 20, c = 30;
    int *arr[3];

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    printf("Printing array of pointers:\n\n");

    for(int i = 0; i < 3; i++){
        printf("arr[%d] stores address: %p \n", i, (void *)arr[i]);
        printf("Value at arr[%d] (i.e., *arr[%d]) = %d\n\n", i, i, *arr[i]);
    }
    return 0;
}