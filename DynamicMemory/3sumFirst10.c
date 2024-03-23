#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, sum=0;
    ptr = (int*)calloc(10, sizeof(int));

    if (ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        exit(0);
    }

    for(i=1; i<=10; i++)
    {
        *ptr=i;
        sum = *ptr + sum;
        ptr++;
    }
    printf("Sum: %d", sum);
    free(ptr);
}