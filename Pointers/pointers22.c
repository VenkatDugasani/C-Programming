// Write a program to find the maximum and minimum elements in an array using pointers.

#include<stdio.h>

void findMaxMin(int *arr, int size, int *max, int *min){
    *max = *arr;
    *min = *arr;

    for(int i = 1; i < size; i++){
        if(*(arr + i) > *max){
            *max = *(arr + i);
        }

        if(*(arr + i) < *min){
            *min = *(arr + i);
        }
    }
}

int main(){
    int numbers[] = {25, 47, 12, 89, 64, 5, 73};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int maxVal, minVal;

    findMaxMin(numbers, size, &maxVal, &minVal);

    printf("Maximum element: %d\n", maxVal);
    printf("Minimum element: %d\n", minVal);

    return 0;
}