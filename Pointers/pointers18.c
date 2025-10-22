//Program to return more than one value from a function using call by reference

#include<stdio.h>

void calculate(int a, int b, int* sum, int* diff){
    *sum = a + b;
    *diff = a - b;
}

int main(){
    int x = 20, y = 10;
    int result_sum, result_diff;

    calculate(x, y, &result_sum, &result_diff);

    printf("The sum is: %d\n", result_sum);
    printf("the difference is: %d\n", result_diff);

    return 0;
}