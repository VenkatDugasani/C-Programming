/* Write a program in C to count the total number of alphabets, digits and special characters in
a string. */

#include<stdio.h>

int main(){
    char str[100];
    int i = 0;
    int alphabets = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0'){
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
            alphabets++;
        }
        else if(ch >= '0' && ch <= '9'){
            digits++;
        }
        else if(ch != '\n'){
            specials++;
        }
        i++;
    }

    printf("Total alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total special Characters: %d\n", specials);

    return 0;
}