/*
** EPITECH PROJECT, 2022
** init.h
** File description:
** header for all init files
*/
#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Export.h>
#include <SFML/System/Types.h>
#include <SFML/System/Time.h>

#ifndef DUCK_FILES_
    #define DUCK_FILES_

    typedef struct {
        sfSprite *sprite;
        sfVector2f position;
        int speed;
    } duck_t;

    sfSprite *create_sprite(char *path);
    duck_t *init_duck(char *path);

#endif
