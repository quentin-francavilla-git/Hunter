/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void variables_duck(v_var *a)
{
    a->_duck->pos.x = 0;
    a->_duck->pos.y = rand()%(780);
    a->_duck->start.x = 0;
    a->_duck->start.y = 0;
    a->_duck->scale.x = 0;
    a->_duck->scale.y = 0;
}

void variables_db(v_var *a)
{
    a->angle = -17;
    a->_db->scale_shenron.x = 1.6;
    a->_db->scale_shenron.y = 1.6;
    a->_db->pos_shenron.x = -2300;
    a->_db->pos_shenron.y = 1700;
}

void variables_boss(v_var *a)
{
    a->i = 0;
    a->_hell->angle_boss = 5;
    a->_hell->scale_red_cursor.x = 0.2;
    a->_hell->scale_red_cursor.y = 0.2;
    a->_hell->posb.x = 575;
    a->_hell->posb.y = 90;
    a->_hell->scale_barres.x = 0.75;
    a->_hell->scale_barres.y = 0.75;
    a->_hell->pos_barre.x = 1315;
    a->_hell->pos_barre.y = 25;
    a->_hell->pos_barre_rouge.x = 1320;
    a->_hell->pos_barre_rouge.y = 94;
}