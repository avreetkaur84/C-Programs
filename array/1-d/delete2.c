// Program did not execute, no output came.

#include <stdio.h>

int main()
{
    int n, del, i, j;
    int a[n];

    printf("Enter number of elements you want in an array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter number at index [%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to delete: ");
    scanf("%d", &del);

    for(i=0; i<n; i++)
    {
        if(a[i] == del)
        {
            j = i;
            printf("The number is present at index [%d]", i);
            break;
        }
        else if(i==n && a[i]!=del)
            printf("%d number is not present in the array", del);
    }

    for(i=j; i<n; i++)
    {
        if(i==j)
        {
            a[i] = a[i+1];
        }
    }

    printf("New array after deletion is: ");
    for(i=0; i<n-1; i++)
    {
        printf("\nEnter number at index [%d]: ");
        scanf("%d", &a[i]);
    }
}