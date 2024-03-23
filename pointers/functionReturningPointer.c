#include <stdio.h>

int *reference();

int main()
{
    int A = 10;
    int *ptr;
    printf("%d", &ptr);
    printf("\nAddress of %d in main() is %u", A, &A);
    ptr = reference();
    printf("\nAddress of %d in reference() was %u", A, ptr);
}

int *reference()
{
    static int n;
    return &n;
}