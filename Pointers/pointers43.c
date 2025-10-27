//Program to dynamically allocate a 2-D array using array of pointers


#include<stdio.h>
#include<stdlib.h>

int main(void){
    int rows, cols;
    int **arr;

    printf("Enter number of rows and colums: ");
    scanf("%d %d", &rows, &cols);

    arr = (int **)malloc(rows * sizeof(int *));
    if(arr == NULL){
        printf("Memory allocation failed for rows\n");
        return 1;
    }

    for(int i = 0; i < rows; i++){
        arr[i] = (int *)malloc(cols * sizeof(int));
        if(arr[i] == NULL){
            printf("Memory allocation failed for row %d\n", i);
            return 1;
        }
    }

    printf("Enter elements (%d x %d):\n", rows, cols);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }


    printf("\nMatrix elements:\n");

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows; i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}