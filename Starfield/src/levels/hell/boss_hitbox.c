/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void boss_hitbox(v_var *a)
{
    if (a->_base->mouse.x > a->_base->sprite_rect.left + 200
    && a->_base->mouse.x < a->_base->sprite_rect.left + 550
    && a->_base->mouse.y > a->_base->sprite_rect.top + 250
    && a->_base->mouse.y < a->_base->sprite_rect.top + 700) {
        //sfMusic_play(a->_music->hit);
        a->_go->hit_count += 1;
    }
    else {
        a->_go->miss_count += 1;
        // if (a->_go->miss_count == 1 || a->_go->miss_count == 2)
        //     //sfMusic_play(a->_music->miss); 
    }
    // if (a->_go->hit_count == 31)
    //     //sfMusic_play(a->_music->laugh);
}