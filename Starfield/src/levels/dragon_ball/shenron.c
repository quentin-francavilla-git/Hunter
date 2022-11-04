/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void shenron(v_var *a)
{
    sfSprite_setScale(a->_db->s_shenron, a->_db->scale_shenron);
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock_shenron);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 0.01) {
        a->_db->pos_shenron.x += 1.7;
        a->_db->pos_shenron.y -= 0.6;
        sfClock_restart(a->_ptr->clock_shenron);
    }
    sfSprite_setRotation(a->_db->s_shenron, a->angle);
    sfSprite_setPosition(a->_db->s_shenron, a->_db->pos_shenron);
}