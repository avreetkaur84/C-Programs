#include <stdio.h>

int main()
{
    int i, j;
    int a[3][3];

    printf("Enter the values: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The values are: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}