#include <stdio.h>
#include <math.h>

int main() {
    int num, n;
    float result;
    printf("Enter the number whose nth root you want to print: ");
    scanf("%d", &num);
    printf("Enter the value of n (root) you want to find: ");
    scanf("%d", &n);

    result = pow(num, 1.0/n);
    printf("The %dth root of %d is %f", n, num, result);
}