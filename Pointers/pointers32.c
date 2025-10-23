//Write a program to demonstrate how a function returns a pointer.

#include<stdio.h>
#include<stdlib.h>

int* createArray(int n){
    int *arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return NULL;
    }

    printf("Enter %d elements: \n", n);

    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    return arr;
}


int main(){
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *ptr = createArray(n);

    if(ptr == NULL){
        return 1;
    }

    printf("You Entered:\n");

    for(int i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    free(ptr);

    return 0;
}