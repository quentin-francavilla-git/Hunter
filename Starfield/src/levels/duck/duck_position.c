/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void left_side(v_var *a)
{
    if (a->side == 2) {
        if (a->_duck->start.y > 390)
            a->_duck->pos.y -= a->v_y1;
        else
            a->_duck->pos.y += a->v_y1;
        a->_duck->pos.x += 5 + (a->level * 1.5);
        if (a->_duck->pos.x > 2090 || a->_duck->pos.y > 1190
        || a->_duck->pos.y < -110) {
            a->_duck->pos.y = 500;
            a->_duck->pos.x = -110;
            a->_go->miss_count += 1;
        }
    }
}

void right_side(v_var *a)
{
    if (a->side == 1) {
        if (a->_duck->start.y > 390) 
            a->_duck->pos.y -= a->v_y1;
        else
            a->_duck->pos.y += a->v_y1;
        a->_duck->pos.x -= 5 + (a->level * 1.5);
        if (a->_duck->pos.x < -110 || a->_duck->pos.y > 1190
        || a->_duck->pos.y < -110) {
            a->_duck->pos.y = 500;
            a->_duck->pos.x= 2090;
            a->_go->miss_count += 1;
        }
    }
}

void duck_position(v_var *a)
{
    left_side(a);
    right_side(a);
}