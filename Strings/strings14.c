//Write a C program to check whether a substring is present in a string.

#include<stdio.h>

int main(){
    char str[100], sub[100];
    int i, j, found;

    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == '\n') str[i] = '\0';
    }

    for(i = 0; sub[i] != '\0'; i++){
        if(sub[i] == '\n') sub[i] = '\0';
    }

    found = 0;

    for(i = 0; str[i] != '\0'; i++){
        j = 0;

        while(str[i + j] != '\0' && sub[j] != '\0' && str[i + j] == sub[j]){
            j++;
        }
        
        if(sub[j] == '\0'){
            found = 1;
            break;
        }
    }

    if(found)
        printf("Substring found in the main string.\n");
    else
        printf("Substring not found.\n");

    return 0;
}