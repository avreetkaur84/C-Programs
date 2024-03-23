#include <stdio.h>
#include <stdlib.h>

void linearSearch(int *arr, int size, int element);

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

    printf("\nEnter the element you want to search: ");
    scanf("%d", &element);

    linearSearch(arr, size, element);

    free(arr);
    return 0;
}

void linearSearch(int *arr, int size, int element)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i] == element)
        {
            printf("%d is at %d index", element, i);
            return;
        }  
    }
    printf("%d is not present in the array", element);
}