//Write a program in C to extract a substring from a given string

#include<stdio.h>

int main(){
    char str[100], sub[100];
    int start, length, i, j;

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }


    printf("Enter starting positions (1 - based index): ");
    scanf("%d", &start);

    printf("Enter length of substring: ");
    scanf("%d", &length);

    for(i = start - 1, j = 0; j < length && str[i] != '\0'; i++, j++){
        sub[j] = str[i];
    }
    sub[j] = '\0';

    printf("Extracted substring: %s\n", sub);

    return 0;
}