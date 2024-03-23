// Print Ascii values from 32 to 126

# include <stdio.h>

int main() {
    int i;

    for (i=32; i<=126; i++)
    {
        printf("The value of %d is %c\n", i, i);
    }
}