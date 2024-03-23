#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int* ) malloc(10 * sizeof(int));
    printf("%d\n", *ptr);

    int *ptrr = (int* ) calloc(10, 4);
    printf("%d", *ptrr);
}
