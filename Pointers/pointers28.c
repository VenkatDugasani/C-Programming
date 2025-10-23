//Write a program to find the largest element using Dynamic Memory Allocation

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *arr;
    int i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers: \n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    
    max = *arr;

    for(int i = 0; i < n; i++){
        if(*(arr + i) > max);
        max = *(arr + i);
    }

    printf("The largest element is: %d\n", max);

    free(arr);

    return 0;
}