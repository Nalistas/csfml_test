/*
** EPITECH PROJECT, 2022
** init_sprite.c
** File description:
** all function to init sprite
*/

#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Export.h>
#include <SFML/System/Types.h>
#include <SFML/System/Time.h>
#include <stdlib.h>
#include "duck.h"

sfSprite *create_sprite(char *path);


duck_t *init_duck(char *path)
{
    duck_t *new_duck = malloc(sizeof(duck_t));
    (new_duck->position).x = -100;
    (new_duck->position).y = 300;
    new_duck->speed = 10;
    new_duck->sprite = create_sprite(path);
    return new_duck;
}

sfSprite *create_sprite(char *path)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfFalse);
    return sprite;
}
