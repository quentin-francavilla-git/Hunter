/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void dragon_ball_params(v_var *a)
{
    a->max_value = 716;
    sfRenderWindow_setMouseCursorVisible(a->_ptr->window, sfFalse);
    dragon_ball_sprite_gestion(a);
    a->_base->sprite_rect = sfSprite_getGlobalBounds(a->_db->s_goku);
}