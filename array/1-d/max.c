# include <stdio.h>

int main()
{
    int i, j;
    int a[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the %d element: ", i+1);
        scanf("%d",&a[i]);
    }

    int max = a[0];

    printf("The highest element in the array is ");
    for(i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d", max);
    return 0;
}