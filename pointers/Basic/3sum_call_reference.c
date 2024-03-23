// Add two numbers using call by reference.
#include <Stdio.h>

int add(int *ptr, int *ptr1);
int main()
{
    int a, b, sum;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ", &b);
    scanf("%d", &b);

    sum = add(&a, &b);
    printf("Sum: %d", sum);
}

int add(int *ptr, int *ptr2)
{
    return *ptr + *ptr2;
}



// int sum = *ptr + *ptr2;