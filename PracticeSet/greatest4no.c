# include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter the value for first number - ");
    scanf("%d", &a);

    printf("Enter the value for second number - ");
    scanf("%d", &b);

    printf("Enter the value for third number - ");
    scanf("%d", &c);

    printf("Enter the value for fourth number - ");
    scanf("%d", &d);

    if (a>b && a>c && a>d) {
        printf("%d is the greatest number", a);
    } else if (b>a && b>c && b>d) {
        printf("%d is the greatest number", b);
    } else if (c>a && c>b && c>d) {
        printf("%d is the greatest number", c);
    } else if (d>a && d>c && d>b) {
        printf("%d is the greatest number", d);
    }
}