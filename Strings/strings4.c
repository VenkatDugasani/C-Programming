//Write a program in C to print individual characters of a string in reverse order.

#include<stdio.h>

int main(){
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0'){
        length++;
    }

    if(length > 0 && str[length - 1] == '\n'){
        length--;
    }

    printf("Characters in reverse order: \n");

    for(i = length - 1; i >= 0; i--){
        printf("%c\n", str[i]);
    }

    return 0;
}