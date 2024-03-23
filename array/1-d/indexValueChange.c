# include <stdio.h>

int main()
{
    int i, n;
    
    printf("Enter the number of elements you want in an array: ");
    scanf("%d", &n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the %d element: ", i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[i]= a[i]+10;
        }
        else {
            a[i] = a[i]*2;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("Element at %d index is: %d\n", i, a[i]);
    }
    
    return 0;
}