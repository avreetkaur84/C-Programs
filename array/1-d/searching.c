#include <stdio.h>
int main()
{
    int a[7];
    int i, num, j;
    printf("Enter elements\n");
    for(i=0; i<7; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to search: ");
    scanf("%d", &num);

    for(i=0; i<7; i++)
    {
        if(num==a[i])
        {
            j=i;
            break;
        }
    }
    if(j<7)
        {
            printf("%d is on the index %d\n", num, j);

        }
        else
        {
            printf("%d does not exist in array\n", num);
        }

}