//Logic to search an element in an array using pointers.

#include<stdio.h>

int main(void){
    int arr[5] = {10, 20, 30, 40, 50};
    int num, found = 0;
    int *p;

    printf("Enter the number to search: ");
    scanf("%d", &num);

    p = arr;

    for(int i = 0; i < 5; i++){
        if(*(p + i) == num){
            printf("Element %d found at position %d (index %d)\n", num, i+1, i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element %d not found in array.\n", num);

        return 0;
}