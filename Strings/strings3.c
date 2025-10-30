//Write a program in C to separate individual characters from a string.

#include<stdio.h>

int main(){
    char str[100];
    int i = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    printf("Individual characters are: \n");

    while(str[i] != '\0'){
        if(str[i] != '\n')
            printf("%c\n", str[i]);
        i++;
    }

    return 0;
}