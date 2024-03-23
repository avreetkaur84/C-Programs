#include <stdio.h>

int main()
{
    int i, j;
    for(i=200; i>=100; i--)
    {
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