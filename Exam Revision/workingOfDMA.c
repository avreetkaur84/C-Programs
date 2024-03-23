#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int UID;
};

int main()
{
    int *m, i;
    struct student *c;
    m = (int*)malloc(6*sizeof(int));
    c = (struct student*)calloc(6, sizeof(int));

    printf("Enter six elements for the array: \n");
    for(i=0; i<6; i++)
        scanf("%d", m+i);

    printf("Enter the details of the student: \n");
    for(i=0; i<2; i++)
    {
        printf("Enter name of %d student: ", i+1);
        scanf("%s", c+i);
        printf("Enter UID of %d student: ", i+1);
        scanf("%d", c+i);
    }

}