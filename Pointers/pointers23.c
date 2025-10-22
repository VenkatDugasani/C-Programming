//Develop a function to reverse a string in place using pointers.

#include<stdio.h>

void reverseString(char *str){
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0'){
        end++;
    }
    end--;

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){
    char str[] = "Venkat";

    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}