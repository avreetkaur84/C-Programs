#include <stdio.h>

int sum(int a, int b);   //Function prototype
int sub(int d, int e);

int main() {
    int c;
    c = sum(2, 8);  //function call
    printf("The sum is %d\n", c);

    int f;
    f = sub(2, 8);
    printf("The subtraction is %d\n", f);

    return 0;
}

int sum (int a, int b) {    //function
    int sum;
    sum = a + b;
    return sum;
}

int sub(int d, int e) {
    int sub;
    sub = d - e;
    return sub;
}