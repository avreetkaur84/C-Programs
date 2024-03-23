#include <stdio.h>
#include <string.h>

struct stu
{
    int rollNo;
    char name[20];
};

int main()
{
    struct stu st[5];
    int i;

    printf("Enter the values: \n");

    for(i=0; i<5; i++)
    {
        printf("Enter roll no: ");
        scanf("%d", &st[i].rollNo);
        printf("Enter Name: ");
        scanf("%s", &st[i].name);
    }

    printf("the entered details of a student are: \n");
    for(i=0; i<5; i++)
    {
        printf("Roll no: %d\n", st[i].rollNo);
        printf("Name: %s\n\n", st[i].name);
    }   
}