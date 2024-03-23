#include <stdio.h>

int main() {
    int t1 = 1;
    int t2 = 1;
    int t3;
    int i;

    for(i=1; i<=10; i++)
    {
        t3 = t1 + t2;
        // printf("%d\n", t3);
        printf("%d = %d + %d\n", t3, t1, t2);
        t1 = t2;
        t2 = t3;
    }
}