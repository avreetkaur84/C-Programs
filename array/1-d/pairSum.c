// Find the total number of pairs in the array whose sum is equal to the given value x. 
# include <stdio.h>

int main()
{
    int i, x, j, c=0;
    int a[8];
    for(i=0;i<8;i++)
    {
        printf("Enter the number at index %d: ", i);
        scanf("%d",&a[i]);
    }

    printf("Enter the number with which you want to compare: ");
    scanf("%d", &x);

    for(i=0; i<8; i++)
    {
        for(j=i+1; j<8; j++)
        {
            if((a[i]+a[j])==x)
            {
                printf("%d and %d\n", a[i], a[j]);
                c++;
            }
        }
    }
    printf("Total Pairs: %d", c);
}