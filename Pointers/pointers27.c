// Develop a function to reverse an array of integers in place using pointers.

#include<stdio.h>

void reverseArray(int *arr, int size){
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    reverseArray(numbers, size);

    printf("Reversed Array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    return 0;
    
}