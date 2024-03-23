#include <Stdio.h>

void num(int n);

int main()
{
    int n = 5;
    num(n);
    return 0;
} 

void num(int n)
{
    if(n==0)
        return;
    printf("%d\n", n);
    num(n-1);
    printf("%d\n", n);
}