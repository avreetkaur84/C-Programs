#include <stdio.h>
#include <string.h>

struct employee {
    char name[20];
    int id;
    int experience;
};

void func(struct employee *ptr);

int main()
{
    struct employee emp;
    struct employee *ptr;
    ptr = &emp;

    strcpy(emp.name, "Cardan");
    emp.id = 124;
    emp.experience = 5;

    func(ptr);
}

void func(struct employee *ptr)
{
    printf("Name: %s\n", ptr->name);
    printf("Id: %d\n", ptr->id);
    printf("Experience: %d\n", ptr->experience);
}
