#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct pokemon
{
    int hp;
    int speed; 
    int attack;
    char tier;
    char name[30];
} pokemon;

int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 100;
    pikachu.attack = 80;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "Charizad");

    pokemon *x;         // Created a pointer x of pokemon datatype.
    x = &pikachu;

    printf("%p\n", x);
    printf("%p\n", &pikachu.hp);
    printf("%p\n", &pikachu.speed);
    printf("%p\n", &pikachu.attack);
    printf("%p\n", &pikachu.tier);
    printf("%p\n", &pikachu.name);
}