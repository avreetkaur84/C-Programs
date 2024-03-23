//1. Develop a C program to input one integer value (a), one float value (b), one character value (c), one string value (str) from the user. Name these variable as a, b, c and str respectively. Print these values separating by them using next line character.


// Charcter line is not executimg
// I have to also take string input, but I don't know how to do it.

# include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    
    printf("Enter the integer value: ");
    scanf("%d", &a);
    printf("Enter the float value: ");
    scanf("%f", &b);
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("\nThe integer value entered by user is %d\n", a);
    printf("The float value entered by user is %f\n", b);
    printf("The character entered by user is %c\n", c);
}