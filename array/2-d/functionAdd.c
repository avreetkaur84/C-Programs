#include <stdio.h>

int insertElements(int x[3][3]);
int add(int a[3][3], int b[3][3]);

int main()
{
    int a[3][3];
    int b[3][3];
    
    insertElements(a);
    insertElements(b);
}

int insertElements(int x[3][3])
{
    int i, j;
    printf("Enter the values for the array - \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the number at index [%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
}