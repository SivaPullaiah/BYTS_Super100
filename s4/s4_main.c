#include "s4_1.c"
#include "s4_2.c"

int printf(const char* format, ...);
extern int counter;
extern int count();
extern int count2();
void main()
{
    counter = 100;
    printf("%d ", count());
    printf("%d ",count2());
    printf("%d", counter);
}