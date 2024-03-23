// Program 8.1: Write a program to read an array of elements and print the same in the reverse order along with their addresses.

#include <stdio.h>

int main()
{
    int arr[5], i;

    printf("Enter the elements: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Printing the elements in reverse order: \n");
    for(i=4; i>=0; i--)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}