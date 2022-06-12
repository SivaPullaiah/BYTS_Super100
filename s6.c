int printf(const char* siva, ...);
void buz(int n)
{
    printf("%d ", n);
    if(n>1)
    {
        if(n%2)
        {
            buz(3*n+1);
        }
        else
        {
            buz(n/2);
        }
    }
}

void main()
{
    buz(4);
}