/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void cursor(v_var *a)
{
    sfSprite_setScale(a->_ptr->s_cursor, a->_base->scale_cursor);
    a->_base->mousei.x = (int)a->_base->mouse.x - 70;
    a->_base->mousei.y = (int)a->_base->mouse.y - 70;
    sfSprite_setPosition(a->_ptr->s_cursor, a->_base->mousei);
}