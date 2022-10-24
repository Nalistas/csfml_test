/*
** EPITECH PROJECT, 2022
** init_window.c
** File description:
** all function to build a normal window
*/

#include <SFML/Graphics.h>

sfRenderWindow *create_window(unsigned int x, unsigned int y,
unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};
    return sfRenderWindow_create(video_mode, title, sfClose
    | sfResize, NULL);
}
