/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void start_window(v_var *a)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    a->_ptr->window = sfRenderWindow_create(video_mode, "My_Hunter", sfFullscreen, NULL);
    sfWindowStyle(sfFullscreen);
    sfRenderWindow_setFramerateLimit(a->_ptr->window, 59);
    sfRenderWindow_setPosition(a->_ptr->window, a->_base->window_pos);
    //sfMusic_play(a->_music->music_menu);
}