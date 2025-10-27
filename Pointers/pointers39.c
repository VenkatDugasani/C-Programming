//Program to access dynamically allocated memory as a 1d array


#include<stdio.h>
#include<stdlib.h>

int main(void){
    int *arr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }

    printf("\nElements in array:\n");
    for(int i = 0; i < n; i++){
        printf("Element %d = %d\n", i + 1, *(arr + i));
    }
    
    free(arr);

    return 0;
}