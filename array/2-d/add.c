#include <stdio.h>

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i, j;

    printf("Enter the values for the 1st array - \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the number at index [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the values for the 2nd array - \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the number at index [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}
