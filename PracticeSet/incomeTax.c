# include <stdio.h>


// Programnmade by me by not understanding the statement properly
// int main () {
//     int income;
//      printf("Enter you annual income - ");
//      scanf("%d", &income);

//      if (income < 250000) {
//         printf("You don't have to pay the income tax");
//      } else if (250000 < income < 500000) {
//         int tax = income * 0.05;
//         printf("You have to pay tax of %drs ", tax);
//      } else if (50000 < income < 1000000) {
//         int tax = income * 0.2;
//         printf("You have to pay tax of %drs ", tax);
//      } else if (1000000 < income) {
//         int tax = income * 0.5;
//         printf("You have to pay tax of %drs ", tax);
//      }
// }


// Program by Harry Bhai....
int main () {
    int income;
    int tax;
     printf("Enter you annual income - ");
     scanf("%d", &income);

     if (income < 250000) {
        printf("You don't have to pay the income tax");
     } else if (250000 < income < 500000) {
         tax = (income - 250000) * 0.05;
     } else if (500000 < income < 1000000) {
         tax = (income - 500000) * 0.2;
     } else if (1000000 < income) {
         tax = (income - 1000000) * 0.5;
     }
     printf("You have to pay tax of %drs ", tax);
}