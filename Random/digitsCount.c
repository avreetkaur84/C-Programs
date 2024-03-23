#include <stdio.h>

int main()
{
    int n;
    int c = 0;

    printf("Enter the number whose digit you want to count: ");
    scanf("%d", &n);

    int num = n;

    while(n!=0)
    {
        n = n/10;
        c++;
    }

    printf("Number of digits present in %d is %d",num, c);
}