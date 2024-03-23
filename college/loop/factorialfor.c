# include <stdio.h>

int main() {
    int i,n;
    int fact = 1;

    printf("Enter the number whose factorial you want to find: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);
}