#include <stdio.h>
int main()
{
    int a[5];
    int num, i, pos;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the location where deletion is to be performed: ");
    scanf("%d", &pos);

    if(pos>num+1)          
    {
        printf("Value entered is wrong");
    }
    else
    {
        for(i=pos-1; i<=num-1; i++)
        {
            a[i]=a[i+1];
        }

        printf("New array is: \n");
        for(i=0; i<num-1; i++)
        {
            printf("a[%d]", i);
            printf("%d\n", a[i]);
        }
    }

}