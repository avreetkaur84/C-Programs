#include <stdio.h>

int main() {
    int principle_ammount;
    int interest_rate;
    int time;

    printf("Enter teh Principle ammount - ");
    scanf("%d", &principle_ammount);

    printf("Enter the Rate of Interest - ");
    scanf("%d", &interest_rate);

    printf("Enter the time in years - ");
    scanf("%d", &time);

    float simple_interest = (principle_ammount * interest_rate * time)/100;

    printf("Simple Interest Rate is %f", simple_interest);

    return 0;
}