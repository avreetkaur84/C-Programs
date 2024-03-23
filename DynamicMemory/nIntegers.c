// you have to print without using array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter total numbers you want: ");
    scanf("%d", &n);

    int *ptr = (int*) malloc (n * sizeof(int));     // this is used to create the space for storing the values.
    int *p = ptr;                                   // this is used for creating another pointer that can point to the same memory location. this is asically made for printing the e;ements because after storing the elements the ptr pointer will not the starting memory location.

    for(int i=0; i<n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d\n", *p);
        p++;
    }
}