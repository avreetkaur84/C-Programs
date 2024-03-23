# include <stdio.h>

int main()
{
    int i;
    int a[4] = {23, 54, 67, 87};
    printf("The values of original array are:\n");
    for(i=0; i<4; i++)
    {
        printf("Value at %d is %d\n", i, a[i]);    
    }

    a[3]= 45;
    printf("The values of updated array are:\n");
    for(i=0; i<4; i++)
    {
        printf("Value at %d is %d\n", i, a[i]);    
    }
}