//Write a program in C to find the length of a string without using library functions.

#include<stdio.h>

int main(){
    char str[100];
    int i = 0;;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0'){
        i++;
    }

    if(i > 0 && str[i - 1] == '\n')
    i--;

    printf("Length of the string: %d \n", i);
    
    return 0;
}
