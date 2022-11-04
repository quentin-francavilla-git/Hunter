/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void move_rect_goku(v_var *a)
{
    if (a->_db->rect_goku.left == a->max_value) {
        a->_db->rect_goku.left = 0;
    }
    else {
        a->_db->rect_goku.left += a->_db->rect_goku.width;
    }
}