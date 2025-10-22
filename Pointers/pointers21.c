// Implement a function that returns the length of a string using pointers

#include<stdio.h>

int stringLength(char *str){
    int length = 0;
    while(*str != '\0'){
        length++;
        str++;
    }
    return length;
}

int main(){
    char name[] = "Dennis Ritchie";

    int len = stringLength(name);

    printf("The length of the string \"%s\" is: %d\n", name, len);

    return 0;
}