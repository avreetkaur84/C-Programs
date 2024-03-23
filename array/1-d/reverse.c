#include <stdio.h>

int main()
{
    int arr[5], i;

    for(i=0; i<=4; i++)
    {
        printf("Enter the %d element: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements of the array in reverse order are - \n");
    for(i=4; i>=0; i--)
    {
        printf("Element at index %d is: %d\n", i, arr[i]);
    }

}