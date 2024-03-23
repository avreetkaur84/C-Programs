#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=100; i++)
    {
        if(i==2)
        {
        printf("%d\n", i);
        }
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                break;
            }
            else if(j==(i-1) && i%j!=0)
            {
                printf("%d\n", i);
            }
        }
    }
}