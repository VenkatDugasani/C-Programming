// Write a program in C to find the maximum number of characters in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        char ch = str[i];
        if(ch != '\n' && ch != ' ')
            freq[(unsigned char)ch]++;
    }

    for(i = 0; i < 256; i++){
        if(freq[i] > max){
            max = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Character with maximum frequency: '%c'\n", maxChar);
    printf("It occurs %d time.\n", max);

    return 0;
}