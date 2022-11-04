/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void boss_reset_position(v_var *a)
{
    if (a->_hell->posb.x < -650 || a->_hell->posb.x > 2400
    || a->_hell->posb.y > 1500 || a->_hell->posb.y < -500) {
        if (a->side == 1) {
            a->_hell->posb.x = -640;
        }
        else {
            a->_hell->posb.x = 2190;
        }
        a->_duck->start.y = rand()%700-500;
        a->_hell->posb.y = a->_duck->start.y;
    }
}

void enfer_sur_terre(v_var *a)
{
    a->x = 3;
    if (a->_duck->start.y > 540)
        a->_hell->posb.y -= a->_hell->angle_boss;
    else
        a->_hell->posb.y += a->_hell->angle_boss;
    if (a->side == 1)
        a->_hell->posb.x += 25;
    if (a->side == 2)
        a->_hell->posb.x -= 25;
    boss_reset_position(a);
    if (a->_go->hit_count == 60)
        a->x = 0;
}

void boss_move(v_var *a)
{
    if (a->_go->hit_count > 10 && a->_go->hit_count < 20
    || a->i == 1 && (a->x != 3)) {
        a->i = 1;
        if (a->_hell->posb.x < 1200)
            a->_hell->posb.x += 10;
    }
    if (a->_go->hit_count > 20 && a->_go->hit_count < 30
    || a->i == 2 && (a->x != 3)) {
        a->i = 2;
        if (a->_hell->posb.x > 300)
            a->_hell->posb.x -= 15;
    }
    if (a->_go->hit_count > 30 && a->_go->hit_count < 60 || a->x == 3) {
        enfer_sur_terre(a);
    }
}