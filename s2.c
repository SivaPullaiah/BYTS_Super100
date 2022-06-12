int printf(const char* format, ...);
int main()
{
    int count=0, i,j,k,m=2,z=2,p=2;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=z; j*=2)
        {
            for(k=1; k<=p; k++)
            {
                count+=2;
                printf("%d", count);
            }
            printf("\n");
        }
    }
}