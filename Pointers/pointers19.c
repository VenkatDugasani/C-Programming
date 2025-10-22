//Write a program to pass a 1D array to a function.

#include<stdio.h>

void display(int arr[], int size){
    printf("Array Elements are: \n");

    for(int i = 0; i < size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int main(){
    int numbers[] = {10, 20, 30, 40, 50};

    display(numbers, 5);

    return 0;
}