# include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter the number on which you want to perform the operation: ");
    scanf("%d", &a);
    printf("Enter the number of positions for the bits to shift: ");
    scanf("%d", &b);
    c = a<<b;               //Shift left
    d = a>>b;              //Shift Right
    printf("Value of %d after performing left shift operation is: %d\n", a, c);
    printf("Value of %d after performing right shift operation is: %d", a, d);
}