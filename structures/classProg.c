#include <stdio.h>
#include <string.h>

struct address
{
    char city[20];
    int pin;
    char phone[14];
};

struct employee
{
    char name[20];
    struct address add;
};

int main()
{
    struct employee e1;
    struct address a1;

    printf("Enter the name: ");
    gets(e1.name);
    printf("Enter the city:");
    gets(e1.add.city);
    printf("Enter the phone no: ");
    gets(e1.add.phone);
    printf("Enter the pin: ");
    scanf("%d", &e1.add.pin);

    puts(e1.name);
    puts(e1.add.city);
    puts(e1.add.phone);
    printf("%d", e1.add.pin);
}