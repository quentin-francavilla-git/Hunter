/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void dragon_ball_hitbox(v_var *a)
{
    if (a->_base->mouse.x > a->_base->sprite_rect.left
    && a->_base->mouse.x < a->_base->sprite_rect.left + 179
    && a->_base->mouse.y > a->_base->sprite_rect.top
    && a->_base->mouse.y < a->_base->sprite_rect.top + 150) {
        db_reset_position(a);
    }
    else {
        a->_go->miss_count += 1;
        // if (a->_go->miss_count == 1 || a->_go->miss_count == 2)
        //     //sfMusic_play(a->_music->miss);
    }
}