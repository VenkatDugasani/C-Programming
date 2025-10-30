//Write a program in C to read a string from the keyboard and sort it using bubble sort

#include<stdio.h>

int main(){
    char str[100], temp;
    int i, j, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0'){
        if(str[length] == '\n'){
            str[length] = '\0';
            break;
        }
        length++;
    }

    for (i = 0; i < length; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  
    }

    for(i = 0; i < length - 1; i++){
        for(j = i + 1; j < length; j++){
            if(str[i] > str[j]){
                temp  = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("String after sorting: %s\n", str);

    return 0;
}

