#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char name[30];
        char tier;
    } pokemon;

    typedef struct legendaryPokemon{
        // Here we have accessed all the features of pokemon structure in this structure, now by using nornal, we can use those features.
        pokemon normal;
        char ability[100];
    } legendaryPokemon;

    typedef struct godPokemon{
        legendaryPokemon legend;
        int specialAttack;
    } godPokemon;

    godPokemon arceus;
    arceus.specialAttack = 300;
    strcpy(arceus.legend.ability, "TurnsIntoStone");
    arceus.legend.normal.attack = 500;                   // accessing double nesting features.

    legendaryPokemon mewtoo;
    strcpy(mewtoo.ability, "Pressure");
    mewtoo.normal.hp = 100;                      // Accessing the features that are of another structure.

    return 0;
}