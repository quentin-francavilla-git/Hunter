/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void hell_params(v_var *a)
{
    a->max_value = 2250;
    sfRenderWindow_setMouseCursorVisible(a->_ptr->window, sfFalse);
    hell_sprite_gestion(a);
    a->_base->sprite_rect = sfSprite_getGlobalBounds(a->_hell->s_boss);
}