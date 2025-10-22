// . Program to print elements of a 2-D array by subscripting a pointer to an array variable

#include<stdio.h>

int main(){
    int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int (*p)[3] = arr;

    printf("Elements of 2D array using pointer to array: \n\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("p[%d][%d] = %d\t Address: %p\n", i, j, p[i][j], (void*)&p[i][j]);
        }
    }
    return 0;
}