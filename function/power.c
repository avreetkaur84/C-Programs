# include <stdio.h>
# include <math.h>

int main() {
    int num, power, result;
    printf("Enter the number whose power you want to print: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);

    result = pow(num, power);
    printf("%d", result);

    return 0;
}