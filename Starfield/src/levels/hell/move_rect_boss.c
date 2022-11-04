/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void move_rect_boss(v_var *a)
{
    if (a->_hell->rect_boss.left == a->max_value) {
        a->_hell->rect_boss.left = 0;
    }
    else {
        a->_hell->rect_boss.left += a->_hell->rect_boss.width;
    }
}