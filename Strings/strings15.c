/* Write a program in C to read a sentence and replace lowercase characters with uppercase
and vice versa. */

#include<stdio.h>
#include<ctype.h>

int main(){
    char str[200];
    int i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0'){
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);
        i++;
    }

    printf("After case conversion: %s \n", str);
    return 0;
}