//Write a program to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>
#include<ctype.h>

void countVowelsConsonants(char *str, int *vowels, int *consonants){
    *vowels = 0;
    *consonants = 0;

    while(*str != '\0'){
        char ch = tolower(*str);

        if(isalpha(ch)){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
        str++;
    }
}

int main(){
    char str[200];
    int vCount, cCount;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }

    countVowelsConsonants(str, &vCount, &cCount);

    printf("Number of vowels: %d\n", vCount);
    printf("Number of consonants: %d\n", cCount);

    return 0;
}


