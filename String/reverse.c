#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    int i, j, k;
    char temp;
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    printf("Your entered string is: "), puts(str);

    // To find size of the string
    int size=0, x=0;
    while(str[x]!='\0')
    {
        size++;
        x++;
    }

    // To reverse a string
    i=0;
    j=size-1;
    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("\nYour reverse string is: "), puts(str);

}