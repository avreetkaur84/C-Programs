# include <stdio.h>

int main() 
{
    int a;
    printf("Enter the number whose table you want to print: ");
    scanf("%d", &a);
    int i=1;
    while(i<=10)
    {
    printf("%d X %d= %d\n",a,i,a*i);
    i++;
    }
    return 0;
}