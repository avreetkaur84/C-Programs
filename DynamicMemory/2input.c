#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,i, sum=0, n, *ptr2;
    printf("Enter the number of elements you want: ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));
    ptr2 = ptr;

    if(ptr==NULL)
    {
        printf("Unable to allocate memory");
        exit(0);
    }

    for(i=0; i<n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", *ptr2);
        ptr2++;
    }

    free(ptr);

}