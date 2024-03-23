// 1.	Write a program in C to show a pointer to an array which contents are pointer to structure. 

# include <stdio.h>
# include <string.h>

int main()
{
    struct student
    {
        char name[20];
        int id;
        char branch[20];
    };

    struct student arr[4];
    struct student *ptr, *ptr2;
    ptr = &arr;
    ptr2 = ptr;

    for(int i=0; i<2; i++)
    {
        printf("\nEnter details for student %d", i+1);
        printf("\nName: ");
        scanf("%s", ptr->name);
        printf("Id: ");
        scanf("%d", &ptr->id);
        printf("Branch: ");
        scanf("%s", ptr->branch);
        ptr++;
    }

    printf("\nPrinting the details of students");
    for(int i=0; i<2; i++)
    {
        printf("\n\nName: %s",ptr2->name);
        printf("\nId: %d",ptr2->id);
        printf("\nBranch: %s",ptr2->branch);
        ptr2++;
    }
}