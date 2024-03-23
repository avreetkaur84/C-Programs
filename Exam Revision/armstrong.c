#include <stdio.h>

void armstrong(int n);

int  main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}

void armstrong(int n)
{
    int x, sum=0;
    int b = n;
    while(b!=0)
    {
        x = b%10;
        sum = sum + (x*x*x);
        b = b/10;
    }
     if(sum == n)
        printf("%d is an armstrong number", n);
    else
        printf("%d is not an armstrong number", n);
}