// Program 9.2: What will the difference if above program is going to be implemented through union? Implement the same program through union and differentiate the output as well as memory allocation.
// Note: Use sizeof operator to differentiate memory allocation of union & structure object.

#include <stdio.h>
#include <string.h>

union personal
{
    char name[30];
    int joiningDate;
    int salary;
};

int main()
{
    int i;
    union personal p1;

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

    printf("Size of union: %d", sizeof(p1));
}