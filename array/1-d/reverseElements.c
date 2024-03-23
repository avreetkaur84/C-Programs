# include <stdio.h>

int main()
{
    int i;
    int a[4];
    printf("Enter the values: \n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in reverse order are: \n");
    for(i=3;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }

}