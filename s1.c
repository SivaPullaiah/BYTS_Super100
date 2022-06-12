int printf(const char *format, ...);
int main()
{
    char arr[]="Google";
    const char* cptr=arr;
    printf("%p\n",cptr);
    cptr="Please!";
    printf("%s\n", cptr);
    printf("%s\n",arr);
    printf("%p",cptr);
}