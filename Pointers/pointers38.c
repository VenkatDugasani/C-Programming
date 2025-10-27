//write a program to concatenate two strings using pointers

#include<stdio.h>

int main(void){
    char str1[100], str2[100];
    char *p1, *p2;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    p1 = str1;
    p2 = str2;

    while(*p1 != '\0'){
        p1++;
    }
    *p1++ = ' ';
    while(*p2 != '\0'){
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';

    printf("\nConcatenated String: %s\n", str1);

    return 0;

}