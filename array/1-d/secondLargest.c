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

    int max = a[0], smax = a[0];

    for(i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }


    printf("Second Largest Element in the array is: ");
    for(i=0;i<5;i++)
    {
        if(smax<a[i] && a[i] != max)
        {
            smax=a[i];
        }
    }
    printf("%d", smax);

    return 0;
}