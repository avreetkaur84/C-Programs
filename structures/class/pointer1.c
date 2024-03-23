#include <stdio.h>
#include <string.h>

struct student
{
    int rollNo;
    char name[20];
    char branch[20];
    int batch;
};

int main()
{
    struct student s1, *ptr;
    // struct student *ptr;
    
    ptr = &s1;

    s1.rollNo = 12246;
    strcpy(s1.name, "Cardan");
    strcpy(s1.branch, "BCS");
    s1.batch = 2023;

    printf("\nRoll No: %d", ptr->rollNo);
    printf("\nName: %s", ptr->name);
    printf("\nBranch: %s", ptr->branch);
    printf("\nBatch: %d", ptr->batch);
}