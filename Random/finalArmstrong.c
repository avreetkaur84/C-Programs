// This code is working perfectly in the online compiler.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, a, b, c=0, d, s=0, e, r;

    printf("Enter the number: ");
    scanf("%d", &num);

    a = num;
    b = num;

    while(a!=0)
    {
        a=a/10;
        c++;
    }

    while(b!=0)
    {
        d = b%10;
        e = pow(d, c);
        s += e;
        b /= 10;
    }

    if(s==num)
        printf("%d is an armstrong number.", num);
    else
        printf("%d is not an armstrong number.", num);
}