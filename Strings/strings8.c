// Write a program in C to copy one string to another string.

#include<stdio.h>

int main(){
    char src[100], dest[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(src, sizeof(src), stdin);

    while(src[i] != '\0'){
        if(src[i] == '\n'){
            src[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    printf("Copied string: %s\n", dest);

    return 0;
}