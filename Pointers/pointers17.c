// Write a simple program for call by reference.

#include<stdio.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside function (after swap): *a = %d, *b = %d\n", *a, *b);
}

int main(){
    int x = 5, y = 10;

    printf("Before function call: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After function call: x = %d, y = %d\n", x, y);

    return 0;
}