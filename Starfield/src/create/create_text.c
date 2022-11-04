/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void create_text(v_var *a)
{
    a->_ptr->font = sfFont_createFromFile("game_over.ttf");
    a->_go->game_over = sfText_create();
    sfText_setString(a->_go->game_over, "GAME OVER");
    sfText_setFont(a->_go->game_over, a->_ptr->font);
    sfText_setCharacterSize(a->_go->game_over, 300);
    a->_ptr->score = sfText_create();
    sfText_setFont(a->_ptr->score, a->_ptr->font);
    sfText_setCharacterSize(a->_ptr->score, 300);
}