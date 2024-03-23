#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct pokemon
{
    int hp;
    int speed; 
    int attack;
    char name[30];
    char tier;
} pokemon;

void fun(pokemon p);

int main()
{
    pokemon pikachu;
    pikachu.hp = 50;
    fun(pikachu);
}

void fun(pokemon p)
{
    printf("%d\n", p.hp);
}