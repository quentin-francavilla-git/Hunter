/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void game_over_display(v_var *a)
{
    sfText_setPosition(a->_ptr->score, a->_base->pos_score);
    sfSprite_setScale(a->_go->s_retry, a->_go->scale_retry);
    sfText_setPosition(a->_go->game_over, a->_go->pos_game_over);
    sfSprite_setPosition(a->_go->s_retry, a->_go->pos_retry);
    sfRenderWindow_clear(a->_ptr->window, sfBlack);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_go->s_b_game_over,
    NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_go->s_retry, 
    NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_go->s_dog, NULL);
    sfRenderWindow_drawText(a->_ptr->window, a->_go->game_over, 
    NULL);
    sfRenderWindow_display(a->_ptr->window);
}