// Write a program in C to store n elements in an array and print the elements using a pointer.

#include <stdio.h>

int main()
{
    int n, arr[n], i;
    printf("Enter the number of elements you want in an array: ");
    scanf("%d", &n);

    // int *ptr = arr;
    printf("Enter the numbers: \n");
    for(i=0; i<n; i++)
    {
        scanf("Element %d: %d\n",i, arr[i]);
        // ptr++;
    }

    // for(i=0; i<n; i++)
    // {
    //     printf("%d\n", *ptr);
    //     ptr++;
    // }
}