#include<stdio.h>
#include<string.h>

void main()
{
    char dest[15] = "This is ";
    char source[] = "Hello  world";
    strcat(dest, source);
    printf("%s", dest);
}
