#include <stdio.h>

int main()
{
    int i, j, num;
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
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &num);

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            if(a[i][j] == num)
            {
                printf("%d is present at index [%d][%d]", num, i, j);
            }
        }
    }
}