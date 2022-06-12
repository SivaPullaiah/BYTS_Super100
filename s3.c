#include<stdlib.h>
#include<string.h>

int printf(const char* format, ...);
int main()
{
    char arr[] = "Google";
    printf("%d\n",strlen(arr));
    char *cptr= (char*)malloc(strlen(arr));
    printf("%d\n",strlen(cptr));
    strcpy(cptr,arr);
    printf("%s",cptr);
    free(cptr);
}