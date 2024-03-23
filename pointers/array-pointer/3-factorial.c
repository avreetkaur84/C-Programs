#include <stdio.h>

void fact(int *ptr);

int main()
{
    int a;
    printf("Enter the no whose factorial you wanna find: ");
    scanf("%d", &a);

    int *ptr = &a;
    fact(ptr);
}

void fact(int *ptr)
{
    int a = *ptr;
    int fac = 1;
    while(a>0)
    {
        fac = fac*a;
        a--;
    }
    printf("Factorial: %d", fac);
}