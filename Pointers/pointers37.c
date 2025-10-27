//Write a program to multiply two matrix using pointers

#include<stdio.h>

int main(void){
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    printf("Enter elements of matrix A ( 3X3):\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", (*(A + i) + j));
        }
    }

    printf("\nEnter elements of matrix B ( 3X3):\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", (*(B + i) + j));
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          *(*(C + i) + j) = 0;
        }
    }

     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                *(*(C + i) + j) += *(*(A + i) + k) * *(*(B + k) + j);
            }
        }
    }


    printf("\nResultant Matrxi (A + B):\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           printf("%4d", *(*(C + i) + j));
        }
        printf("\n");
    }
    return 0;
}