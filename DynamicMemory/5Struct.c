#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[20];
    int marks;
};

int main()
{
    struct student *ptr;
    int i;
    int records = 3;
    ptr = (struct student*)calloc(5, sizeof(struct student));

    if(ptr==NULL)
        printf("Unable to allocate memory\n");

    for(i=0; i<3; i++)
    {
        printf("Enter the name: ");
        scanf("%s", (ptr+i)->name);
        printf("Enter the marks: ");
        scanf("%d", &(ptr+i)->marks);
    }

    for(i=0; i<3; i++)
    {
        printf("Name: %s\n", (ptr+i)->name);
        printf("Marks: %d\n", (ptr+i)->marks);
        pritf("\n");
    }

    free(ptr);
}