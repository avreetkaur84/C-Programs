// Program to find the sum and average of odd integer from 1 to 300

# include <stdio.h>

int main() {
    int i;
    int j = 0;
    int sum = 0;
    int average;

    for (i=1; i<=300; i++)
    {
        if(i%2 != 0)
        {
            sum += i;
            // j = j+1;
        }
    }
    // printf("%d", j);
    average = sum/150;
    printf("The sum of first 300 odd integers is %d\n", sum);
    printf("The average of first 300 odd integers is %d", average);
}