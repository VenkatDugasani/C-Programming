/*vWrite a program to compare two strings lexicographically (like the strcmp function) using
pointers.
*/

#include<stdio.h>

int stringCompare(char *str1, char *str2){
    while(*str1 != '\0' && *str2 != '\0'){
        if(*str1 != *str2){
            return (*str1 - *str2);
        }
        str1++;
        str2++;
    }
}

int main(){
    char s1[50], s2[50];

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    int result = stringCompare(s1, s2);

    if(result == 0)
        printf("Both strings are equal. \n");
    else if (result > 0)
        printf("\"%s\" is greater than \"%s\".\n", s1, s2);
    else
        printf("\"%s\" is smaller than \"%s\".\n", s1, s2);
    

    return 0;
}