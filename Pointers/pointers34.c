//Write a program to show a pointer to an array whose contents are pointers to structures.

#include<stdio.h>

struct Student{
    char name[20];
    int age;
};


int main(void){
    struct Student s1 = {"ALice", 21};
    struct Student s2 = {"Bob", 22};
    struct Student s3 = {"Charlie", 23};

    struct Student *arr[3];
    arr[0] = &s1;
    arr[1] = &s2;
    arr[2] = &s3;

    struct Student *(*ptr)[3] = &arr;

    printf("Pointer to an array whose contents are points to structures: \n\n");

    for(int i = 0; i < 3; i++){
        printf("Name: %s, Age: %d\n", (*ptr)[i]->name, (*ptr)[i]->age);
    }
    return 0;
}