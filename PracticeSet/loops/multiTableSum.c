#include <stdio.h>

// int main() {
//     int num = 8;
//     int sum = 0;
//     for (int i=1; i<=80; i++)
//     {
//         if (i%num == 0)
//         {
//             sum += i;
//         }
//     }
//     printf("%d", sum);
// }


int main() {
    int num;
    printf("Enter the number whose table sum you want to print - ");
    scanf("%d", &num);
    int sum = 0;
    for(int i=0; i<=(num*10); i++) 
    {
        if(i%num == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
}