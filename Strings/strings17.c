//Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void){
    char str[200];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for(i = 0, j = 0; str[i] != '\0'; i++){
        if(isalpha(str[i])){
            str[j++] = str[i];
        }
    }

    str[j] = '\0';

    printf("String after removing non-alphabets: %s\n", str);
    return 0;
}