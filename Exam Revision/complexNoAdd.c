#include <stdio.h>

struct complex
{
    int real;
    int imaginary;
}c1, c2, result;

struct complex sum(struct complex c1, struct complex c2);

int main()
{   
    c1.real = 32;
    c1.imaginary = 7;

    c2.real = 87;
    c2.imaginary = 2;

    result = sum(c1, c2);

    printf("Sum: %d+%di", result.real, result.imaginary);
     
}

struct complex sum(struct complex c1, struct complex c2)
{
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}