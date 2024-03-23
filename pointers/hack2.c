#include <stdio.h>

void update(int *a,int *b) {
    int x, y;
    x = *a;
    y = *b;
    *a = x + y;
    *b = x - y;
}

int main() {
    int a=5, b=7;
    int *pa = &a, *pb = &b;
    
    // scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}