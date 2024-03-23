#include <stdio.h>

int callByValue(int a, int b);
int callByReference(int *c, int *d);

int main()
{
    int a = 8;
    int b = 7;
    int c = 5;
    int d = 4;

    printf("Values of variables from the main function: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n\n", d);

    callByValue(a, b);
    callByReference(&c, &d);

    printf("Values of variables from the main function after swaping: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
}

int callByValue(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);
}

int callByReference(int *c, int *d)
{
    int t;
    t = *c;
    *c = *d;
    *d = t;

    printf("c = %d\n", *c);
    printf("d = %d\n\n", *d);
}