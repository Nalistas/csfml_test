/*
** EPITECH PROJECT, 2022
** init.h
** File description:
** header for all init files
*/
#include <SFML/Graphics.h>

#ifndef INIT_FILES_
    #define INIT_FILES_

sfRenderWindow *create_window(unsigned int x, unsigned int y,
    unsigned int bpp, char *title);

#endif
