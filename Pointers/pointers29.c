//Write a program to find the factorial of a given number using pointers.

#include<stdio.h>

void findFactorial(int *n, long long *result){
    *result = 1;

    for(int i = 1; i <= *n; i++){
        *result = *result * i;
    }
}

int main(){
    int num;
    long long fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    findFactorial(&num, &fact);

    printf("Factorial of %d is: %lld\n", num, fact);

    return 0;
}
