#include<stdio.h>

int main()
{
    int i =5;
    int *p =&i;
    printf("%d\n",&i);
    p++;
    printf("%d",*p);
    }