//Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>

int main(){
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0'){
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z'){
            ch = ch + 32;
        }

        if(ch >= 'a' && ch <= 'z'){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            }else{
                consonants++;
            }
        }
        i++;
    }

    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}