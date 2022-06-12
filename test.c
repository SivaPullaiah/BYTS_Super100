#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char arr[] = "Infosys"; //length is 7
    printf("%d\n", sizeof(arr));

    char *cptr1 = (char*) malloc(strlen(arr));         //This lines what is the difference sir     
    char *cptr2 = (char*) malloc(strlen(arr+2));         //This lines what is the difference sir
    char *cptr3 = (char*) malloc(strlen(arr+2));         //This lines what is the difference sir
    char *cptr4 = (char*) malloc(strlen(arr+3));         //This lines what is the difference sir
    char *cptr5 = (char*) malloc(strlen(arr+4));         //This lines what is the difference sir
    char *cptr6 = (char*) malloc(strlen(arr+5));         //This lines what is the difference sir

    printf("%d\n", sizeof(cptr1));
    printf("%d\n", sizeof(cptr2));
    printf("%d\n", sizeof(cptr3));
    printf("%d\n", sizeof(cptr4));
    printf("%d\n", sizeof(cptr5));
    printf("%d\n", sizeof(cptr6));
}


/*
output:
PS C:\BYTS PRACTICE\s100> gcc test.c -o siva
PS C:\BYTS PRACTICE\s100> ./siva
8
8
8
8
8
8
8
*/