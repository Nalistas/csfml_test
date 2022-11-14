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

duck_t *init_duck(char *file_path)
{
    duck_t *new_duck = malloc(sizeof(duck_t));
    (new_duck->position).x = -100;
    (new_duck->position).y = 300;
    new_duck->speed = 10;
    new_duck->second = 0;
    new_duck->clock_mv = sfClock_create();
    new_duck->texture = sfTexture_createFromFile(file_path, NULL);
    new_duck->sprite = create_sprite(new_duck->texture);
    return new_duck;
}

void move_duck(duck_t *duck, int window_width)
{
    duck->time_mv = sfClock_getElapsedTime(duck->clock_mv);
    duck->second = duck->time_mv.microseconds / 1000000.0;
    duck->position.x = 0.05 * window_width * duck->speed * duck->second;
    if (duck->position.x > (window_width)) {
        sfClock_restart(duck->clock_mv);
    }
}

void destroy_duck(duck_t *duck)
{
    sfClock_destroy(duck->clock_mv);
    sfSprite_destroy(duck->sprite);
    sfTexture_destroy(duck->texture);
    free(duck);
}
