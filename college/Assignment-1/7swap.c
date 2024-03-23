// Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.

# include <stdio.h>

int main() {
    int C;
    int D;
    printf("Enter the first number: ");
    scanf("%d", &C);
    printf("Enter the second number: ");
    scanf("%d", &D);

    C = C+D;
    D = C-D;
    C = C-D;

    printf("The value of first is %d\n", C);
    printf("The value of second is %d", D);
}