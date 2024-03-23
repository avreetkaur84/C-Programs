// Add two numbers using pointers.
#include <Stdio.h>

int add(int *ptr, int *ptr1);
int main()
{
    int a, b, sum;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ", &b);
    scanf("%d", &b);

    int *ptr = &a;
    int *ptr2 = &b;

    sum = add(ptr, ptr2);
    printf("Sum: %d", sum);
}

int add(int *ptr, int *ptr2)
{
    return *ptr + *ptr2;
}



// int sum = *ptr + *ptr2;