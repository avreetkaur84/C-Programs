#include <stdio.h>
#include<stdlib.h>      //This library is added to use rand function for generating random numbers
#include<time.h>

int main() {
    int number;
    srand(time(0));
    number = rand()%100 + 1;
    printf("The number is %d", number);

    return 0;
}


//%100  + 1 is done to get the random numbers from range of 1 to 100 only. but without this, computer is generating random numbers which are greater than 100 also.