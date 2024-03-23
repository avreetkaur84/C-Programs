#include <stdio.h>
#include <math.h>

int main() {
    int num, power;
    float result;
    printf("Enter the number whose nth root you want to print: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);

    result = pow(num, 1.0/power);
    printf("%f", result);
}