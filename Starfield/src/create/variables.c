/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void variables(v_var *a)
{
    a->_base->window_pos.x = 0;
    a->_base->window_pos.y = 0;
    variables_bases(a);
    variables_menu(a);
    variables_duck(a);
    variables_db(a);
    variables_boss(a);
    variables_game_over(a);
    variables_usage(a);
}

void variables_bases(v_var *a)
{
    a->_base->mousei.x = 0;
    a->_base->mousei.y = 0;
    a->status = 0;
    a->side = 2;
    a->level = 0;
    a->v_y1 = rand()%3+1;
    a->max_value = 0;
    a->_go->miss_count = 0;
    a->_go->hit_count = 0;
    a->_base->scale_cursor.x = 0.3;
    a->_base->scale_cursor.y = 0.3;
    a->_base->pos_score.x = 620;
    a->_base->pos_score.y = 200;
    a->_base->scale_heart.x = 0.12;
    a->_base->scale_heart.y = 0.12;
    a->_base->pos_heart.x = 30;
    a->_base->pos_heart.y = 30;
}

void variables_menu(v_var *a)
{
    a->_menu->pos_button.x = 960 - 247;
    a->_menu->pos_button.y = 310;
    a->_menu->pos_button_db.x = 30;
    a->_menu->pos_button_db.y = 310;
    a->_menu->pos_button_hell.x = 1350;
    a->_menu->pos_button_hell.y = 310;
    a->_menu->button_hell_rect.width = 464;
    a->_menu->button_hell_rect.height = 132;
}

void variables_game_over(v_var *a)
{
    a->_go->scale_retry.x = 0.045;
    a->_go->scale_retry.y = 0.045;
    a->_go->pos_retry.x = 890;
    a->_go->pos_retry.y = 300;
    a->_go->pos_dog.x = 825;
    a->_go->pos_dog.y = 540;
    a->_go->pos_dog_db.x = 825;
    a->_go->pos_dog_db.y = 390;
    a->_go->scale_dog.x = 1.5;
    a->_go->scale_dog.y = 1.5;
    a->_go->pos_game_over.x = 600;
    a->_go->pos_game_over.y = -70;
}

void variables_usage(v_var *a)
{
    a->usage = "\nMy_Hunter, un projet Epitech.\n\nUSAGE : "
    "./my_hunter\n\n";
}