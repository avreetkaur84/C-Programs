#include <stdio.h>

int main()
{
    int a[5] = {3, 5, 6, 4, 7};
    int b[5] = {5, 2, 1, 8, 9};
    int c[5];
    int i;

    printf("Enter five elements for matrix a: ");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);

    printf("Enter five elements for matrix b: ");
    for(i=0; i<5; i++)
        scanf("%d", &b[i]);

    for(i=0; i<5; i++)
        c[i] = a[i]*b[i];
    
    printf("Multiplication of a and b matric is ");
    for(i=0; i<5; i++)
        printf("%d\t", c[i]);
}