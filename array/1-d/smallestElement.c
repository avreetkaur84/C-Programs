# include <stdio.h>

int main()
{
    int i, j;
    int a[4];
    
    printf("Enter the values: \n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<4;i++)
    {
        for(j=0; j<4; j++)
        {
            if(a[i]<=a[j])
            {
                if(j == 3 && a[i]<a[3])
                {
                    printf("%d is the smallest\n", a[i]);
                }
                else if(j==3 && a[3]==a[3] )
                {
                    printf("%d is the smallest\n", a[i]);
                }
                continue;
            }
            else {
                break;
            }
        }
    }

}