# include <stdio.h>

int main()
{
    int a[5];
    int i, j=a[0];

    for (i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<=4; i++)
    {
        if(a[i]<j)
        {
            j=a[i];
        }
    }
    printf("%d", j);
    return 0;
}