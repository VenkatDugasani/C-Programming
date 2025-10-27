// Write a program to print pointer to an array

#include<stdio.h>

int main(void){
    int arr[5] = {10, 20, 30, 40, 50};

    int (*ptr)[5];

    ptr = &arr;

    printf("Accessing array of elemtns using pointer to an array:\n\n");

    for(int i = 0; i < 5; i++){
        printf("Element %d = %d\n", i + 1, (*ptr)[i]);
    }
    return 0;
}