#include  <stdio.h>

int main() {
    int a=10, b=40;
    int c,d,e,f,g,h;

    c = a&b;        //bitwise and
    d = a|b;        //bitwise or
    e = a^b;        //bitwise XOR
    f = a>>2;       //shift right
    g = a<<3;       //shift left
    h = ~b;         //bitwise Not

    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);
    printf("%d\n", h);
}