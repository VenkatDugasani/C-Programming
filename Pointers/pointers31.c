//Write a program to sort an array using a pointer

#include<stdio.h>

void sortArray(int *arr, int n){
    int *i, *j, temp;

    for(i = arr; i < arr + n - 1; i++){
        for(j = i + 1; j < arr + n; j++){
            if(*i > *j){
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main(){
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: \n", n);

    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }

    sortArray(arr, n);

    printf("\nSorted array in ascending order: \n");

    for(int i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }

    printf("\n");
    return 0;
}