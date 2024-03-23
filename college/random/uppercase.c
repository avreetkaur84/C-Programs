# include <stdio.h>

int main() {
    char a;
    printf("Enter the alphabet that you want to convert to uppercase: ");
    scanf("%c", &a);

    char ua = a - 32;
    printf("%c", ua);
}