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
        sfTexture *texture;
        sfClock *clock_mv;
        sfTime time_mv;
        sfVector2f position;
        float second;
        int speed;
    } duck_t;

    sfSprite *create_sprite(sfTexture *);
    duck_t *init_duck(char *);
    void move_duck(duck_t *, int);
    void destroy_duck(duck_t *);

#endif
