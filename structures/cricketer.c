#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct cricketer
    {
        char name[50];
        int age;
        int matches;
        float runs;
    } player;

    player arr[5];

    for(int i=0; i<4; i++)
    {
        printf("Enter the name of player %d: ", i+1);
        scanf("%s", arr[i].name);
        printf("Enter the age: ");
        scanf("%d", &arr[i].age);
        printf("Enter the total number of matches played: ");
        scanf("%d", &arr[i].matches);
        printf("Enter the avearge runs: ");
        scanf("%.2f", &arr[i].runs);
        printf("\n");
    }

    for(int i=0; i<4; i++)
    {
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Matches: %d\n", arr[i].matches);
        printf("Runs: %.2f\n", arr[i].runs);
        printf("\n");
    }
}