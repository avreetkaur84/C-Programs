#include <stdio.h>
#include <stdbool.h>

// We can't directly compare the full strucrure, we have too compare it step by step.
int main()
{
    typedef struct date{
        int day;
        int month;
        int year;
    } date;

    // a -> 2/5/2004
    // b -> 7/11/2023
    date a;
    date b;

    a.day = 2;
    a.month = 5;
    a.year = 2004;

    b.day = 7;
    b.month = 11;
    b.year = 2023;

    bool flag = true;
    if(a.day != b.day) flag = false;
    if(a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;

    if(flag == true) printf("Dates are same\n");
    else printf("Dates are different\n");

    date c;
    // We can directly put all the values of a structure in c structure.
    c = a;

    bool girrafe = true;
    if(a.day != c.day) girrafe = false;
    if(a.month != c.month) girrafe = false;
    if(a.year != c.year) girrafe = false;

    if(girrafe == true) printf("Dates are same\n");
    else printf("Dates are different\n");

}