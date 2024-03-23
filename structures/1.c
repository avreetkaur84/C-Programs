#include <stdio.h>

int main()
{
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    }  pikachu, charizard;

    pikachu.attack = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    charizard.hp = 130;
    charizard.attack = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    printf("%d", pikachu.attack);
}