//  Write a program to read a character in upper case and print it in lower case

# include <stdio.h>

int main() {
    char a;

    printf("Enter the charcter in upper case: ");
    scanf("%c", &a);

    a = a + 32;
    printf("Character in lowercase is %c", a);
}