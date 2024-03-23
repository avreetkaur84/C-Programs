#include <Stdio.h>

int sum(int n);

int main()
{
    int n = 5;
    int add = sum(n);
    printf("Sum: %d", add);
    return 0;
} 

int sum(int n)
{
    if(n==0)
        return 0;
    return n + sum(n-1);
}