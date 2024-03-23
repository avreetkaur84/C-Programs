# include <stdio.h>

int main()
{
    int i;
    int a[10];
    for(i=0;i<10;i++)
    {
        printf("Enter marks of roll no %d: ", i);
        scanf("%d",&a[i]);
    }
    printf("Roll no of students who scored less than 35 is ");
    for(i=0;i<10;i++)
    {
        if(a[i] < 35)
        printf(" %d ", i);
        else continue;
    }
    return 0;
}