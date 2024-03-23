#include <stdio.h>
#include <string.h>

struct student {
        int id;
        char name[20];
        float percentage;
    };

void func(struct student *s1);

int main()
{
    struct student s1;

    s1.id = 12246;
    strcpy(s1.name, "Ayan");
    s1.percentage = 92.8;

    func(&s1);
}

void func(struct student *s1)
{
    printf("id: %d\n", s1->id);
    printf("Name: %s\n", s1->name);
    printf("Percentage: %f\n", s1->percentage);
}