/* Write a program to print postfix/prefix increment/decrement in a pointer variable of base
type int*. */

#include<stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40 , 50};
    int* p = arr;

    printf("=== Initial State ===\n");
    printf("Index : %ld  | Address : %p | *p = %d\n\n", p - arr, (void*)p, *p);

    printf("=== Postfix Increment (p++) ===\n");
    printf("Before Index : %ld  | Address : %p | *p = %d\n", p - arr, (void*)p, *p);
    printf("Printing with p++ (uses old address and then moves)\n");
    printf("Printed: Address: %p | *p = %d\n",(void*)p, *p);
    p++;
    printf("After: Index: %ld | Address : %p | *p = %d\n\n", p - arr, (void*)p, *p);

     printf("=== Prefix Increment (++p) ===\n");
     printf("Before Index : %ld  | Address : %p | *p = %d\n", p - arr, (void*)p, *p);
     printf("Printing with ++p (uses new address, then moves)\n");
     ++p;
     printf("After: Index: %ld | Address : %p | *p = %d\n\n", p - arr, (void*)p, *p);

     printf("=== Postfix Decrement (p--) ===\n");
    printf("Before Index : %ld  | Address : %p | *p = %d\n", p - arr, (void*)p, *p);
    printf("Printing with p-- (uses old address and then moves)\n");
    printf("Printed: Address: %p | *p = %d\n",(void*)p, *p);
    p--;
    printf("After: Index: %ld | Address : %p | *p = %d\n\n", p - arr, (void*)p, *p);

    printf("=== Prefix Decrement (--p) ===\n");
     printf("Before Index : %ld  | Address : %p | *p = %d\n", p - arr, (void*)p, *p);
     printf("Printing with --p (uses new address, then moves)\n");
     --p;
     printf("After: Index: %ld | Address : %p | *p = %d\n\n", p - arr, (void*)p, *p);
     

     printf("=== End State) ===\n");
     printf("Pointer now points to arr[%ld] = %d\n", p - arr, *p);

     return 0;


}