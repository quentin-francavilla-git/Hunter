/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void duck_display(v_var *a)
{
    sfRenderWindow_clear(a->_ptr->window, sfBlack);
    sfSprite_setTextureRect(a->_duck->sprite, a->_duck->rect);
    sfRenderWindow_drawSprite(a->_ptr->window, 
    a->_duck->s_back_classique, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_base->s_heart, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_duck->sprite, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_ptr->s_cursor, 
    NULL);
    sfRenderWindow_display(a->_ptr->window);
}