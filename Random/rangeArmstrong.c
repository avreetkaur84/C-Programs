#include <stdio.h>
#include <math.h>

int main()
{
    int num,n;
    int a,b,c=0;

    for(num=1; num<=500; num++)
    {
        n = num;
        while(n!=0)
            {
                a = n%10;
                b = pow(a,3);
                c = b+c;
                n = n/10;
            }
            if(c == num)
            {
                printf("%d is armstrong\n", num);
            }
            else{
                printf("%d is not armstrong\n", num);
            }

    }
    
}