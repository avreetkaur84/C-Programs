// 7.1 Illustrate the concept of call by value vs. call by reference by taking example of swapping of two numbers.

#include <stdio.h>

int swapValue(int, int);


int main()
{
    int a=10, b=20, temp;
    swapValue(a, b);
    printf("a: %d, b: %d\n", a, b);
}

int swapValue(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("x: %d, y: %d\n", x, y);
}