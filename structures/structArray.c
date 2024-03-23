#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    } pokemon;

// Herer we have created an array of pokemon structure.
    pokemon arr[3];

    arr[0].hp = 80;
    arr[0].attack = 50;
    arr[0].speed = 100;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "Pikachu");

    arr[1].hp = 130;
    arr[1].attack = 80;
    arr[1].speed = 80;
    arr[1].tier = 'S';
    strcpy(arr[1].name, "Charizad");

    arr[2].hp = 50;
    arr[2].attack = 60;
    arr[2].speed = 80;
    arr[2].tier = 'B';
    strcpy(arr[2].name, "Mewtoo");

    // With the help of for loop, we can print all the structure array value at once.
    for(i=0; i<3; i++)
    {
        printf("Name: %s\n", arr[i].name);
        printf("HP: %d\n", arr[i].hp);
        printf("Attack: %d\n", arr[i].attack);
        printf("Speed: %d\n", arr[i].speed);
        printf("Tier: %d\n", arr[i].tier);
        printf("\n");
    }

}
