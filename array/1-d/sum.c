# include <stdio.h>

int main()
{
    int i, sum=0;
    int a[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the %d element: ", i);
        scanf("%d",&a[i]);
    }

    printf("The sum of all the elements is ");
    for(i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    printf("%d", sum);
    return 0;
}