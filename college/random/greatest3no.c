#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value for first number: ");
    scanf("%d", &a);
    printf("Enter the value for second number: ");
    scanf("%d", &b);
    printf("Enter the value for third number: ");
    scanf("%d", &c);  

    (a>b)&&(a>c)?printf("a is greatest")?(b>c):printf("b is greatest"):printf("c is greatest");
}