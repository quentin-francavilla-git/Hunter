/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void move_rect_duck(v_var *a)
{
    if (a->_duck->rect.left == a->max_value) {
        a->_duck->rect.left = 0;
    }
    else {
        a->_duck->rect.left += a->_duck->rect.width;
    }
}