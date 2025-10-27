//Program to access dynamically allocate a 2-D array using a pointer to an array

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int (*ptr)[cols];

    ptr = malloc(rows * sizeof(*ptr));


    if(ptr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\n Enter elemtnts (%d X %d):\n", rows, cols);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", (*(ptr + i) + j));
        }
    }

    printf("\nMatrix Elements:\n");

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%4d", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    free(ptr);
    return 0;
}