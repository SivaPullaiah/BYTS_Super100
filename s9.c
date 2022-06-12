#include<stdio.h>

void main()
{
    char str[] = "Twinkle\0 Twinkile Littile star";
    printf("%s %c %c %s\n",str,*(str+11), *(str+24), str+17);
    printf("%s %c %c %s",str,*(str+11), *(str+24), *(str+17));
}