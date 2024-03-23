# include <stdio.h>
# include <math.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    float root = sqrt(num);
    printf("Square root of %d is %f", num, root);
}