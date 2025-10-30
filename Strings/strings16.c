/* Write a program in C to find the number of times a given word 'the' appears in the given
string. */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char str[200];
    int count = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while(str[i] != '\0'){

        if((i == 0 || isspace(str[i - 1])) &&
            tolower(str[i]) == 't' &&
            tolower(str[i + 1]) == 'h' &&
            tolower(str[i + 2]) == 'e' &&    
            (str[i + 3] == '\0' || isspace(str[i + 3]) || ispunct(str[i + 3]))){
                count++;
                i += 3;
        } else{
            i++;
        }
    }

    printf("\n The word 'the' appears %d times.\n", count);
    return 0;
}