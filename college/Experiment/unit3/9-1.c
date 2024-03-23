// Program 9.1: Define a structure type, personal, that would contain person name, date of joining and salary. Using this structure, write a program to read this information for one person from the key board and print the same on the screen.

#include <stdio.h>
#include <string.h>

struct personal
{
    char name[30];
    int joiningDate;
    int salary;
};

int main()
{
    int i;
    struct personal p1;

    printf("Enter the name: ");
    gets(p1.name);
    printf("Enter the joining date: ");
    scanf("%d", &p1.joiningDate);
    printf("Enter the salary: ");
    scanf("%d", &p1.salary);

    printf("\n\n");
    printf("Name: "), puts(p1.name);
    printf("Joining Date: %d", p1.joiningDate);
    printf("\nSalary: %d\n", p1.salary);

    printf("Size of structure: %d", sizeof(p1));
}