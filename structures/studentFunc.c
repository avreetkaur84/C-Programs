// This progrma is not giving desired output.
#include <stdio.h>
#include <string.h>

typedef struct students
    {
        int rollNo;
        char name[30];
        char department[50];
        char course[50];
        int joiningYear;
    } student;

void check(student a, student b);

int main()
{
    student a;
    student b;

    strcpy(a.name, "Ayan");
    a.rollNo = 3;
    a.joiningYear = 2022;
    strcpy(a.department, "BCE");
    strcpy(a.course, "Photography");

    strcpy(b.name, "Rishab");
    b.rollNo = 8;
    b.joiningYear = 2019;
    strcpy(b.department, "BCE");
    strcpy(a.course, "Civil Engineering");

    check(a, b);
    return 0;
}

// You can't directly compare the string, either use the function strcmp or use the forloop.
void check(student x, student y)
{
    if (x.department == y.department) 
        printf("Both have same department\n");
    else
        printf("Both have different department\n");

    return;
}