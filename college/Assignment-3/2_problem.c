// 2.	Write a program in C to sort an array using Pointer

#include <stdio.h>

int main()
{
    int arr[4];
    int i, k, j, temp=0;
    k = 4;

    printf("Enter the numbers: \n");
    for(int i=0; i<4; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("\nElements entered are: \n");
    for(int i=0; i<4; i++)
    {
        printf("%d\n", arr[i]);
    }
}