#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 4, i, sum=0;
    ptr = (int *)malloc(n * sizeof(int));
    int *ptrr = ptr;

    for(i=0; i<n; i++)
    {
        *ptr = i;            
        sum = sum + (*ptr);
        ptr++;
    }

    for(i=0; i<n; i++)
    {
        printf("Value: %d\n", *ptrr);
        ptrr++;
    }
    printf("Sum: %d\n", sum);
}