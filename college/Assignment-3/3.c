// 3.	Write a program in C to count the number of vowels and consonants in a string using a pointer. 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Gramioscope ismarix";
    int v=0, c=0;
    int *ptr = &str;

    for(int i=0; i<strlen(str); i++)
    {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
        {
            v++;
        }
        else if(str[i] == " ")
        {
            continue;
        }
        else
        {
            c++;
        }
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d", c);
}