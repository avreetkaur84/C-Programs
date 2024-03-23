# include <stdio.h>

int factorial(int x) {
    int fact = 1;
    for(int i=1; i<=x;i++) {
        fact = fact*i;
    }
    return fact;
}

int combination (int n, int r) {
    return factorial(n)/ (factorial(r)*factorial(n-r));
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    int  ncr = combination(n, r);
    printf("%d", ncr);

    return 0;
}


// permutation and combination is used