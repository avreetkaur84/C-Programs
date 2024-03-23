//  program in C to find the maximum number between two numbers using a pointer.

#include <Stdio.h>

int func(int *ptr1, int *ptr2);
int main()
{
    int a, b, max;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ", &b);
    scanf("%d", &b);

    int *ptr1 = &a;
    int *ptr2 = &b;

    max = func(ptr1, ptr2);
    printf("Larger number is %d", max);
}

int func(int *ptr1, int *ptr2)
{
    if(*ptr1 > *ptr2)
        return *ptr1;
    else
        return *ptr2;
}



// int sum = *ptr + *ptr2;