#include <stdio.h>
#include <string.h>

struct student {
        int id;
        char name[20];
        float percentage;
    };

void func(int id, char name[], float percentage);

int main()
{
    struct student s1 = {2, "Ayan", 98.5};

    func(s1.id, s1.name, s1.percentage);
}

void func(int id, char name[], float percentage)
{
    printf("id: %d\n", id);
    printf("Name: %s\n", name);
    printf("Percentage: %f\n", percentage);
}