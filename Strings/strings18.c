//Write a program in C to find the frequency of characters

#include<stdio.h>
#include<string.h>

int main(void){
    char str[200];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++){
        unsigned char ch = str[i];
        freq[ch]++;
    }

    printf("\n Character frequencies: \n");

    for(i = 0; i < 256; i++){
        if(freq[i] != 0){
            printf("'%c' occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}