// Unable to understand this....

#include <stdio.h>

void update(int *a,int *b) {
    int y, z;
    y = *a;
    z = *b;
    *a = y + z;
    *b = y - z;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}