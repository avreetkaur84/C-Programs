#include <stdio.h>

int main()
{
    int num, i, j;

    printf("Enter the num: ");
    scanf("%d", &num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number", num);
            break;
        }
        if(num%i!=0 && i==num-1)
        {
            printf("%d is a prime number", num);
        }
    }
}