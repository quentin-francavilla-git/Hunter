/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void menu_display(v_var *a)
{
    sfRenderWindow_clear(a->_ptr->window, sfBlack);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_ptr->back, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_menu->s_button_start, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_menu->s_button_hell, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->_menu->s_button_db, NULL);
    sfRenderWindow_display(a->_ptr->window);
}