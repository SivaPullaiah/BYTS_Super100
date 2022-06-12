#include<stdio.h>
#include<stdlib.h>
#define SIZEOFARRAY(x) sizeof(x)/sizeof(x[0])

void main()
{
    char arr[6]="12";
    int i;
    for(i=0; i<SIZEOFARRAY(arr);i++)
    {
        printf("%c ",arr[i]?arr[i]:'*');
    }
}