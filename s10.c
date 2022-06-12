#include<stdio.h>
#include<stdlib.h>

struct numbers
{
    short num1;
    char c;
    short num2;
    short num3;
};

int sum(const struct numbers* mynumber)
{
    int total=0;
    const short* ptr = &mynumber->num1;
    for( ; ptr <= &mynumber -> num3; ptr++)
    {
        total+=*(ptr);
    }
    return total;
}

void main(){
    struct numbers mynumber = {1, 'a', 2, 3};
    printf("%d", sum(&mynumber));
}