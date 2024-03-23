#include <stdio.h>

int main()
{
    int n, i, j, temp=0;
    int a[n];

    printf("Enter the total elements you want in an array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter the element at index[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nThe sorted array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}