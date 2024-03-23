#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main()
{
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int sum, minus, multi, division;
    int operation;

    printf("Enter 1 for adding 2 numbers \n");
    printf("Enter 2 for subtracting 2 numbers \n");
    printf("Enter 3 for multiplying 2 numbers \n");
    printf("Enter 4 for dividing 2 numbers \n");
    printf("Enter 0 to exit \n\n");
    printf("Enter the number: ");
    scanf("%d", &operation);

    switch(operation)
    {
        case 1: 
            sum = add(a, b);
            printf("Sum of %d and %d is %d", a, b, sum);
            break;
        case 2: 
            minus = sub(a, b);
            printf("Subtraction of %d and %d is %d", a, b, minus);
            break;
        case 3: 
            multi = mul(a, b);
            printf("Multiplication of %d and %d is %d", a, b, multi);
            break;
        case 4: 
            division = div(a, b);
            printf("Sum of %d and %d is %d", a, b, division);
            break;
        case 0: 
            break;
        default:
            printf("Enter valid number");
    }
}

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

int div(int a, int b)
{
    return a/b;
}