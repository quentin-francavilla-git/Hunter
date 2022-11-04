/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void hell_display(v_var *a)
{
    sfRenderWindow_clear(a->_ptr->window, sfBlack);
    sfSprite_setTextureRect(a->_hell->s_boss, a->_hell->rect_boss);
    sfSprite_setTextureRect(a->_base->s_heart, a->_base->heart_rect);
    sfSprite_setTextureRect(a->_hell->s_barre_rouge,
    a->_hell->rect_barre_rouge);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_hell->s_back_boss, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_hell->s_barre_rouge, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_hell->s_barre, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_base->s_heart, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_hell->s_boss, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_hell->s_red_cursor, 
    NULL);
    sfRenderWindow_display(a->_ptr->window);
}