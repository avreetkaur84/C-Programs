#include <stdio.h>

int main()
{
    int a[2][2];
    int i, j, det;

    printf("Enter the elements for the array: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            a[j][i] = a[i][j];
        }
    }

    printf("Matrix formed after transpose is: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }


}