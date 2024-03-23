#include <stdio.h>
#include <string.h>

int main() 
{

    char c;
    char s[50];
    char sen[20];
    
    scanf(" %c", &c);
    scanf(" %s", &s);
    scanf(" %[^\n]%*c", &sen);
    
    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s", sen);
       
    return 0;
}
