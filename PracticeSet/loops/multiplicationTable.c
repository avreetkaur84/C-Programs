#include <stdio.h>

int main() {
    int n;
    printf("Enter the numbeer who table you want to print - ");
    scanf("%d", &n);

    for(int i=1; i<=(n*10); i++) {
        if (i%n == 0){
            printf("%d\n", i);
        }
    }
}