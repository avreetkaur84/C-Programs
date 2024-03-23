// Write a program to print ACSII value of a character.

# include <stdio.h>

int main() {
    char a;

    printf("Enter the character whose ASCII value you want: ");
    scanf("%c", &a);

    printf("The ASCII value of %c is %d", a, a);
}