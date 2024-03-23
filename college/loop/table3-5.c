#include <stdio.h>

int main()
{
    int i, j;
    for(i=3; i<=5; i++)
    {
        printf("Table of %d\n", i);
        for(j=1; j<=10; j++)
        {
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
}