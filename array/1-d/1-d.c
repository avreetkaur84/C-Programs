# include <stdio.h>

int main()
{
    int i;
    int a[4];
    printf("Enter the values: \n");
    for(i=0;i<4;i++)
    {
        scanf("%d",a+i);    // Not pointing to address still it stores value.
    }
    printf("Values are: \n");
    for(i=0;i<4;i++)
    {
        printf("The value at %d is %d and address is %d\n", i, a[i], &a[i]);
    }
    return 0;
}