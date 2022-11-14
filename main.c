/*
** EPITECH PROJECT, 2022
** test
** File description:
** all the test to try csfml
*/
#include "include/init.h"
#include "include/duck.h"
#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Export.h>
#include <SFML/System/Types.h>
#include <SFML/System/Time.h>
#include <stdlib.h>

void manage_event(sfRenderWindow *window, sfEvent event);
void display_all(sfRenderWindow *window, sfSprite *sprite,
sfSprite *background);

int main(void)
{
    sfRenderWindow *window = create_window(974, 767, 64, "first window");
    sfEvent event;
    sfTexture *texture_duck = sfTexture_createFromFile("texture/wisp.png", NULL);
    sfTexture *texture_background = sfTexture_createFromFile("texture/bg.png", NULL);
    duck_t *duck = init_duck(texture_duck);
    sfSprite *background = create_sprite(texture_background);
    while (sfRenderWindow_isOpen(window)) {
        manage_event(window, event);
        duck->position.x +=
        0.00001 * sfRenderWindow_getSize(window).x * duck->speed;
        if (duck->position.x > sfRenderWindow_getSize(window).x) {
            duck->position.x = -100;
        }
        sfSprite_setPosition(duck->sprite, duck->position);
        display_all(window, duck->sprite, background);
    }
    sfRenderWindow_destroy(window);
    sfSprite_destroy(background);
    sfTexture_destroy(texture_duck);
    sfTexture_destroy(texture_background);
    free(duck);
}

void display_all(sfRenderWindow *window, sfSprite *sprite, sfSprite *background)
{
    sfRenderWindow_display(window);
    sfRenderWindow_drawSprite(window, background, NULL);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void manage_event(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
    }
}
