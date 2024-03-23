// 2.	Write a program in C to sort an array using Pointer
#include <stdio.h>

int main()
{
    int arr[4];
    int i, j, temp=0;
    int n=4;
    int *ptr;

    ptr = &arr;

    printf("Enter the numbers: \n");
    for(int i=0; i<4; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                printf("\n ptr[j] : %d", ptr[j]);
                temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
            }
        }
    }


    printf("\nElements entered are: \n");
    for(int i=0; i<4; i++)
    {
        printf("%d\n", arr[i]);
    }
}