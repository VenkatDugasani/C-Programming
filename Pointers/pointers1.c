#include<stdio.h>

int main(){
    int a = 20;
    float b = 5.5;
    char c = 'X';

    printf("Value of a = %d, Address of = %p\n", a, &a);
    printf("Value of b = %.2f, Address of = %p\n", b, (void*)&b);
    printf("Value of c = %c, Address of = %p\n", c, (void*)&c);

    return 0;
}