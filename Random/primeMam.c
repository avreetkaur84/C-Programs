#include <stdio.h>

int main()
{
    int i, j, c=0;
    for(i=1; i<=100; i++)
    {
        if(i==2)
        {
        printf("%d", i);
        break;
        }
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
            c++;
            break;
           } 
        }
        if(c==0)
        {
        printf("%d\n", i);
        }
    }
}