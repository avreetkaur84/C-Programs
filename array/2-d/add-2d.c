#include <stdio.h>

int main()
{
    int i, j;
    int a[3][3];
    int b[3][3];

    printf("Enter the values for first array: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the values for Second Array: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The first array is: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("The second array is: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("The new array after addition is: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d\t", a[i][j]+b[i][j]);
        }
        printf("\n");
    }

}