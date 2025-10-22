// Create a function that swaps two numbers using pointers

#include<stdio.h>

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside function: a = %d, b = %d\n", *a, *b);
}

int main(){
    int x = 5, y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}