#include <stdio.h>
int main()
{
    int a[5];
    int i;
    printf("Enter elements\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    
    for(i=2; i<5; i++)
    {
        a[i]=a[i+1];
    }    

    printf("New array: \n");
    for(i=0; i<4; i++)
    {
        printf("%d\n", a[i]);
    }
}