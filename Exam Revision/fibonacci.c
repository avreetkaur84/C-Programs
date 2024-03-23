#include <stdio.h>

void fibonacci(int a, int b, int n);

int main()
{
    int a=1, b=2, n=5;
    fibonacci(a, b, n);
}

void fibonacci(int a, int b, int n)
{
    int c, i=3;
    while(i<=n)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
        i++;
    }
    
}