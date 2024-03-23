#include <Stdio.h>

void palindrome(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    palindrome(n);
}

void palindrome(int n)
{
    int b = n;
    int y = 0;
    while(b!=0)
    {
        int x = b%10;
        y = x + y*10;
        b = b/10;
    }
    
    if(y == n)
        printf("%d is a palindrome number", n);
    else    
        printf("%d is not a palindrome number", n);
}