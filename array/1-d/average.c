# include <stdio.h>

int main()
{
    int a[10];
    int i;
    int sum=0, average=0;
    printf("Enter 10 values: \n");
    for(i=1; i<=10;i++)
    {
        scanf("%d", &a[i]);
    }
    // printf("The values are: \n");
    for(i=1; i<=10;i++)
    {
        // printf("%d\n", a[i]);
        sum = sum + a[i];
    }
    printf("Sum is %d\n", sum);
    average = sum/10;
    printf("Average is %d", average);
}