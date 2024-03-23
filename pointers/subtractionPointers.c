#include <stdio.h>
 int main()
 {
    int i = 100;
    int *p = &i;
    int **temp = &p;

    printf("Value of i = %d\n", i);
    printf("Value of &i = %d\n", &i);
    printf("Value of p = %d\n", p);
    printf("Value of &p = %d\n", &p);
    printf("Value of temp = %d\n\n", **temp);

    p = p+2;
    printf("Value of &i = %d\n", &i);
    printf("Value of p = %d\n", p);
    printf("Value of &p = %d\n", &p);
    printf("Value of temp = %d\n", temp);
 }