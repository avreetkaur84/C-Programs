#include <stdio.h>
#include <string.h>

typedef struct person
{
    int age;
    float weight;
} person;

void change(person *x);

int main()
{
    person p1;
    person *p = &p1;

    p->age = 19;
    p->weight = 50.5;

    printf("%d\n", p1.age);
    printf("%f\n", p1.weight);

    change(&p1);

    printf("%d\n", p1.age);
    printf("%f\n", p1.weight);
}

void change(person *a)
{
    a->age = 23;
    a->weight = 60.3;
}