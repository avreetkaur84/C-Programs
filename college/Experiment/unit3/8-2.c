// Program 8.2: Write a function code that is returning pointer to the larger value out of two passed values.

#include <stdio.h>

int larger(int* , int*);

int main()
{
    int a, b, l;
    int *x, *y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = &a;
    y = &b;

    l = larger(x, y);
    printf("%d is greater", l);
    // Here I have passed the variables without using & operator, and still it works, Why????
}

int larger(int* x, int* y)
{
    if(*x > *y)
        return *x;
    else
        return *y;
}