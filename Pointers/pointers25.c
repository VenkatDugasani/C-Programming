/* Implement a function to copy one string into another using pointers, without using any
standard library functions */

#include<stdio.h>

void stringCopy(char *source, char* destination){
    while(*source != '\0'){
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int main(){
    char src[] = "Dennis Ritchie";
    char dest[50];

    stringCopy(src, dest);

    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);

    return 0;
}
