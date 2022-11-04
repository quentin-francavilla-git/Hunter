/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"


void rect(v_var *a)
{
    rect_duck(a);
    rect_db(a);
    rect_hell(a);
    rect_game_over(a);
    a->_base->heart_rect.top = 0;
    a->_base->heart_rect.left = 0;
    a->_base->heart_rect.width = 900;
    a->_base->heart_rect.height = 950;
    a->_menu->button_rect.top = 0;
    a->_menu->button_rect.left = 0;
    a->_menu->button_rect.width = 464;
    a->_menu->button_rect.height = 132;
}

void rect_duck(v_var *a)
{
    a->_duck->rect.top = 0;
    a->_duck->rect.left = 0;
    a->_duck->rect.width = 110;
    a->_duck->rect.height = 110;
}

void rect_db(v_var *a)
{
    a->_db->rect_goku.top = 0;
    a->_db->rect_goku.left = 0;
    a->_db->rect_goku.width = 179;
    a->_db->rect_goku.height = 150;
}

void rect_hell(v_var *a)
{
    a->_hell->rect_boss.top = 0;
    a->_hell->rect_boss.left = 0;
    a->_hell->rect_boss.width = 750;
    a->_hell->rect_boss.height = 900;
    a->_hell->rect_barre_rouge.top = 0;
    a->_hell->rect_barre_rouge.left = 0;
    a->_hell->rect_barre_rouge.width = 721;
    a->_hell->rect_barre_rouge.height = 60;
}

void rect_game_over(v_var *a)
{
    a->_go->rect_retry.top = 0;
    a->_go->rect_retry.left = 0;
    a->_go->rect_retry.width = 2345;
    a->_go->rect_retry.height = 2400;
    a->_go->rect_dog.top = 0;
    a->_go->rect_dog.left = 0;
    a->_go->rect_dog.width = 150;
    a->_go->rect_dog.height = 200;
    a->_go->rect_dog_db.top = 0;
    a->_go->rect_dog_db.left = 0;
    a->_go->rect_dog_db.width = 150;
    a->_go->rect_dog_db.height = 300;
}