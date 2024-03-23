#include <stdio.h>

int main()
{
    int m = 29;
    int *ab = &m;
    printf("Address of m: %d\n", &m);
    printf("Value of m: %d\n\n", m);

    printf("Address of ab: %d\n", ab);
    printf("Value of ab: %d\n\n", *ab);

    m = 34;
    printf("Address of ab: %d\n", ab);
    printf("Value of ab: %d\n\n", *ab);

    *ab = 7;
    printf("Address of ab: %d\n", ab);
    printf("Value of ab: %d\n\n", *ab);

    printf("Address of m: %d\n", &m);
    printf("Value of m: %d\n\n", m);
}