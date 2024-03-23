#include <stdio.h>

int main()
{
    int a[]= {12, 34, 56};
    int *ptr = a;

    for(int i=0; i<3; i++)
    {
        printf("Address: %d\n", ptr);
        printf("Value: %d\n", *ptr);

        ptr++;
    }
}