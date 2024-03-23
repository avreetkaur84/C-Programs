#include <stdio.h>

// int main () {
//     int n = 10;
//      for(int i=100; i>=10; i--) {
//         if(i%n == 0) {
//             printf("%d\n", i);
//         }
//      }
// }


int main() {
    int n;
    printf("Enter the number whose table you want to print - ");
    scanf("%d", &n);

    for(int i = n*10; i>=n; i--) {
        if(i%n == 0) {
            printf("%d\n", i);
        }
    }
}