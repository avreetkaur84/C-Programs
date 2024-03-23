// 2.	Write a program in C to sort an array

#include <stdio.h>

int main()
{
    int arr[4];
    int i, j, temp=0;
    int n=4;

    printf("Enter the numbers: \n");
    for(int i=0; i<4; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    printf("\nElements entered are: \n");
    for(int i=0; i<4; i++)
    {
        printf("%d\n", arr[i]);
    }
}