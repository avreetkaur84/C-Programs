#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int a,b,c=0;

    printf("Enter the number: ");
    scanf("%d", &num);
    
    int n=num;

    while(n!=0)
    {
        a = n%10;
        b = pow(a,3);
        c = b+c;
        n = n/10;
        // printf("%d\n", n);
    }
    if(c == num)
    {
        printf("%d is armstrong", num);
    }
    else{
        printf("%d is not armstrong", num);
    }

}