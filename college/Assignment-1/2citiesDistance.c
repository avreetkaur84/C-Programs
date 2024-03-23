// 2. The distance between two cities (in km) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimetres.
// 1 km = 1,000 meters
// 1 km = 3,280.84 feet
// 1 km = 39,370.1 inches
// 1 km = 100,000 cm

# include <stdio.h>

int main () {
    float distance ; 
    float meter, feet, inch, centimeter;

    printf("Enter the distance between two cties in kilometer: ");
    scanf("%f", &distance);

    meter = distance * 1000;
    feet = distance * 3280.84;
    inch = distance * 39370.1;
    centimeter = distance * 100000;

    printf("The distance between cities in meters is %f\n", meter);
    printf("The distance between cities in feet is %f\n", feet);
    printf("The distance between cities in inches is %f\n", inch);
    printf("The distance between cities in centimeters is %f\n", centimeter);
}