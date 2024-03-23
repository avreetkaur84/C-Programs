#include <stdio.h>

struct team{
    // char *name;
    char name[20];
    int members;
    char captain[20];
}

t1 = {"India", 11, "Rohit"}, *sptr = &t1;

int main()
{
    printf("\nTeam: %s", sptr->name);
    printf("\nMembers: %d", sptr->members);
    printf("\nCaptain: %s", sptr->captain);
}