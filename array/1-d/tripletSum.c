// Count the number of triplets whose sum is equal to the given value x.
# include <stdio.h>

int main()
{
    int i, x, j, k, c=0;
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
            for(k=j+1; k<8; k++)
            {
                if((a[i]+a[j]+a[k])==x)
                {
                    printf("%d, %d and %d\n", a[i], a[j], a[k]);
                    c++;
                }
            }
        }
    }
    printf("Total Pairs: %d", c);
}