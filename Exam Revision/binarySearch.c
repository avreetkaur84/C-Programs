#include <stdio.h>
#include <stdlib.h>

void binarySearch(int *arr, int size, int element);
void bubbleSort(int *arr, int size);

int main()
{
    int *arr;
    int size, i, element;
    printf("Enter the number of elements you want in an array: ");
    scanf("%d", &size);
    arr = (int*)calloc(size, sizeof(int));

    printf("Enter %d elements in the array: \n", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", arr+i);
    }

    bubbleSort(arr, size);

    printf("The sorted array: \n");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the element you want to search: ");
    scanf("%d", &element);

    binarySearch(arr, size, element);

    free(arr);
    return 0;
}

void bubbleSort(int *arr, int size)
{
    int i, j, temp;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void binarySearch(int *arr, int size, int element)
{
    int i;
    int first = 0;
    int last = size-1;
    int mid;

    while(first<=last)
    {
        mid = (first+last)/2;
        if(arr[mid] == element)
        {
            printf("%d is present at %d index", element, mid);
            return;
        }  
        if(arr[mid]<element)
            first = mid+1;
        else
            last = mid-1;
    }
    printf("%d is not present in the array", element);
}