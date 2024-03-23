// Program 4.1: Write a program to find sum and average of odd integers between 1 to 300 which are divisible by 7.

# include <stdio.h>

int main()
{
    int i, average;
    int sum = 0;
    for(i=1; i<=300; i++)
    {
        if(i%2!=0 && i%7==0)
        {
            sum += i;
        }
    }
    average = sum/21;
    printf("The sum of numbers is %d\n", sum);
    printf("The average of numbers is %d", average);
}
