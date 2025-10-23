/*Write a program to print the value and address of array elements by subscripting a pointer
variable.*/

#include<stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Address of arr(base)  : %p\n\n", (void*)arr);
    printf("Index   | Address of Element | Value  (Using p[i])\n");
    printf("-----------------------------------------------------\n");

    for(int i = 0; i < 5; i++){
        printf("%5d | %18p | %5d\n", i, (void*)&p[i], p[i]);
    }
    return 0;
}