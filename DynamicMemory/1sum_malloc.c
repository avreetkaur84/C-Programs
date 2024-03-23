#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,i, sum=0, n;
    printf("Enter the number of elements you want: ");
    scanf("%d", &n);

    // ptr = (int*)malloc(n*sizeof(int));
    ptr = (int*)calloc(n, sizeof(int));
    if(ptr==NULL)
    {
        printf("Unable to allocate memory");
        exit(0);
    }

    for(i=0; i<n; i++)
    {
        scanf("%d", ptr);
        sum = sum + (*ptr);
        ptr++;
    }
    printf("Sum: %d", sum);
    free(ptr);
}