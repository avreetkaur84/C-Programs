# include <stdio.h>

int main()
{
    int i, x, count;
    int a[5];

    printf("Enter the number with which you want to compare elements: ");
    scanf("%d", &x);

    for(i=0;i<5;i++)
    {
        printf("Enter the %d element: ", i);
        scanf("%d",&a[i]);
    }

    printf("Number of elements greater than %d are: ", x);
    for(i=0;i<5;i++)
    {
        if(a[i]>x)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}