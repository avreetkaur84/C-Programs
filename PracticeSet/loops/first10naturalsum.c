#include <stdio.h>

// Using for loop
// int main() {
//     int sum = 0;
//     for(int i=1; i<=10; i++)
//     {
//         sum += i;
//     }
//     printf("Sum of first 10 natural numbers is %d", sum);
// }



// Using while loop
// int main() {
//     int sum = 0;
//     int i = 1;
//     while(i<=10) {
//         sum += i;
//         i++;
//     }
//     printf("Sum of first 10 natural numbers is %d", sum);   
// }



// Using do while loop
int main() {
    int sum = 0;
    int i = 1;
    do{
        sum += i;
        i++;
    }while(i<=10);


    printf("Sum of first 10 natural numbers is %d", sum);   
}