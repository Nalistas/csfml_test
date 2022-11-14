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

sfSprite *create_sprite(sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfFalse);
    return sprite;
}

duck_t *init_duck(sfTexture *texture)
{
    duck_t *new_duck = malloc(sizeof(duck_t));
    (new_duck->position).x = -100;
    (new_duck->position).y = 300;
    new_duck->speed = 15;
    new_duck->sprite = create_sprite(texture);
    return new_duck;
}