#include <stdio.h>

int *greatest();

int main()
{
    int *ptr;
    ptr = greatest();

    printf("%d is greatest", *ptr);
}

int *greatest()
{
    static int a = 8;
    static int b = 9;
    if(a>b)
        return &a;
    else
        return &b;
}