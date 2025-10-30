//Write a program in C to input a string and print it.

#include<stdio.h>

int main(){
    char str[100];

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    printf("You entered: %s", str);

    return 0;
}