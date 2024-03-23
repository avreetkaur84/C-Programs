#include <stdio.h>

int main() {
    int a, b;
    int add, sub, quotient, remainder;
    printf("Enter the value for a and b: ");
    scanf("%d%d", &a, &b);

    add = a+b;
    sub = a-b;
    quotient = a/b;
    remainder = a%b;

    printf("Addition of a and b is %d \n", add);
    printf("Subtraction of a and b is %d \n", sub);
    printf("Quotient of a and b is %d \n", quotient);
    printf("Remainder of a and b is %d \n", remainder);
}