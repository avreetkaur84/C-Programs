#include <stdio.h>
#include <math.h>

int enter_num(int*);        //function prototype declaration
int total_digits(int);
int armstrong(int, int);

int main()
{
    int num, dig;
    enter_num(&num);        // function call
    
    dig = total_digits(num);
    printf("%d has %d digits\n", num, dig);

    armstrong(num, dig);
}

int enter_num(int* n)               // function definition
{
    printf("Enter the number: ");
    scanf("%d", n);
}

int total_digits(int a)
{
    int c=0;
    while(a!=0)
    {
        a/=10;
        c++;
    }
    return c;
}

int armstrong(int n, int d)
{
    int o=n, p, q, sum=0;
    while(o!=0)
    {
        q = o%10;
        p = pow(q, d);
        sum += p;
        o/=10;
    }
    
    if(sum == n)
    {
        printf("%d is armstrong number", n);
    }
    else{
        printf("%d is an not armstrong number", n);
    }
}