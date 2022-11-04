/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void duck_hitbox(v_var *a)
{
    if (a->_base->mouse.x > a->_base->sprite_rect.left
    && a->_base->mouse.x < a->_base->sprite_rect.left + 110
    && a->_base->mouse.y > a->_base->sprite_rect.top
    && a->_base->mouse.y < a->_base->sprite_rect.top + 110) {
        duck_reset_position(a);
    }
    else {
        a->_go->miss_count += 1;
    }
}