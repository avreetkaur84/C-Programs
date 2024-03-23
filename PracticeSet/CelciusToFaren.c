#include <stdio.h>

int main () {
    int celcius;
    printf("Enter the degree of celcius that you want to convert to farenheit - ");
    scanf("%d", &celcius);
    
    
    float farenheit = (celcius * 9/5) + 32;
    printf("%d celcius is equal to %f farenheit", celcius, farenheit);
    
    return 0;
}