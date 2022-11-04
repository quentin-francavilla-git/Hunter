/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void dragon_ball_display(v_var *a)
{
    sfRenderWindow_clear(a->_ptr->window, sfBlack);
    sfSprite_setTextureRect(a->_db->s_goku, a->_db->rect_goku);
    sfSprite_setTextureRect(a->_base->s_heart, a->_base->heart_rect);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_db->s_back_db, 
    NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_base->s_heart, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_db->s_goku, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_db->s_shenron, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_ptr->s_cursor, NULL);
    sfRenderWindow_display(a->_ptr->window);
}