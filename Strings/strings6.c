//Write a program in C to compare two strings without using string library functions.

#include<stdio.h>

int main(){
    char str1[100], str2[100];
    int i = 0, flag = 0; 

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0;
    while(str1[len1] != '\0') len1++;
    if(len1 > 0 && str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';

    while(str2[len2] != '\0') len2++;
    if(len2 > 0 && str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';

    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            flag = 1;
            break;
        }
        i++;
    }


    if(flag == 0 && str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}