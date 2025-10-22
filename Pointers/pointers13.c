//program to print the values and address of elements of 2-d array
#include<stdio.h>

int main(){
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printf("Values and addresses of 2D Array Elements:\n\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("arr[%d][%d] = %d\t Address: %p\n", i, j, arr[i][j], (void*)&arr[i][j]);
        }
    }
    return 0;
}