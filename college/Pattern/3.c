// Unable to print the 3rd and 4th pattern. 

#include <stdio.h>

int main()
{
    int i, j;

    // for(i=1; i<=5; i++)
    // {
    //     for(j=1; j<=(6-i); j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    for(i=1; i<=5; i++)
    {
        for(j=5; j>=i; j--)
        {
            while(j=i-1)
                printf("* ");
        }
        printf("\n");
    }
}