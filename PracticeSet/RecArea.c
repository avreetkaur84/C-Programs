#include <stdio.h>

// int main() {
//     int l = 4;
//     int b = 5;
//     printf("The area of rectangle is %d ", l*b);
    
//     return 0;
// }

int main() {
    int l;
    int b;
    printf("Enter the length for rectangle - ");
    scanf("%d", &l);

    printf("\nEnter the breadth for rectangle - ");
    scanf("%d", &b);

    printf("\n The area of rectangle is %d", l*b);

    return 0;
}