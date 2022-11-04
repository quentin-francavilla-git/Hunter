/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void create_clock(v_var *a)
{
    a->_ptr->clock = sfClock_create();
    a->_ptr->clock2 = sfClock_create();
    a->_ptr->clock5 = sfClock_create();
    a->_ptr->clock_boss = sfClock_create();
    a->_ptr->clock_shenron = sfClock_create();
}