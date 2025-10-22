//Program to print elements of a 3-D array using pointer notation

#include<stdio.h>

int main(){

    int arr[2][2][3] = {
        { {1, 2, 3}, {4, 5, 6} },
        { {7, 9, 9}, {10, 11, 12} }
    };

    int (*p)[2][3] = arr;

    printf("Printing 3D array elemetns using pointer notaton: \n\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++){
                printf("arr[%d][%d][%d] = %d\t Address: %p\n",
                i, j, k,
                *(*(*(p + i) + j) + k),
                (void*)&arr[i][j][k]);
            }
        }
    }
    return 0;
}
