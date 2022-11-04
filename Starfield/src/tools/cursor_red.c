/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void cursor_red(v_var *a)
{
    sfSprite_setScale(a->_hell->s_red_cursor, a->_hell->scale_red_cursor);
    a->_base->mousei.x = (int)a->_base->mouse.x - 70;
    a->_base->mousei.y = (int)a->_base->mouse.y - 70;
    sfSprite_setPosition(a->_hell->s_red_cursor, a->_base->mousei);
}