/*Write a program that calculates the sum of all elements in an integer array using pointer
arithmetic.*/

#include<stdio.h>

int sumArray(int *arr, int size){
    int sum = 0;
    int *ptr = arr;

    for(int i = 0; i < size; i++){
        sum += *ptr;
        ptr++;
    }
    return sum;
}

int main(){
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int total = sumArray(numbers, size);

    printf("The sum of all elements is: %d\n", total);

    return 0;
}


