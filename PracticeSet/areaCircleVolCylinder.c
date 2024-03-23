#include <stdio.h>

// int main() {
//     int r = 3;
//     float pie = 3.14;
//     float area = pie*r*r;
//     printf("Area of circle is %f \n", area);

//     int height = 4;
//     float volume = area*height;
//     printf("Volume of cylinder is %f ", volume);
// }

int main () {
    int r;
    float pi = 3.14;

    printf("Enter the radius of circle - ");
    scanf("%d", &r);
    float area = pi*r*r;
    printf("Area of circle is %f", area);

    int h;
    printf("\nEnter the height of cylinder - ");
    scanf("%d", &h);
    float volume = area*h;
    printf("Volume of cylinder is %f", volume);
}