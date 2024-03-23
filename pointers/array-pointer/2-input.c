// Write a program in C to store n elements in an array and print the elements using a pointer.

#include <stdio.h>

int main()
{
    int arr[4];
    int *ptr = arr;
    int *ptr2 = ptr;
    int i;

    for(i=0; i<4; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", ptr);
        ptr++;
    }

    printf("\n");
    for(i=0; i<4; i++)
    {
        printf("Element %d: %d\n", i, *ptr2);
        ptr2++;
    }    
}