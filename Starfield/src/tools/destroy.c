/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void destroy(v_var *a)
{
    sfRenderWindow_destroy(a->_ptr->window);
    sfText_destroy(a->_go->game_over);
    sfSprite_destroy(a->_duck->sprite);
    // sfMusic_destroy(a->_music->music_dbz);
    // sfMusic_destroy(a->_music->music_duck);
    // sfMusic_destroy(a->_music->miss);
    // sfMusic_destroy(a->_music->hit);
    // sfMusic_destroy(a->_music->laugh);
    // sfMusic_destroy(a->_music->music_menu);
    // sfMusic_destroy(a->_music->boss_song);
    sfSprite_destroy(a->_ptr->back);
    sfSprite_destroy(a->_go->s_retry);
    //sfMusic_destroy(a->_music->music_game_over);
    sfSprite_destroy(a->_db->s_back_db);
    sfSprite_destroy(a->_ptr->s_cursor);
    sfSprite_destroy(a->_db->s_goku);
    sfTexture_destroy(a->_duck->texture);
}