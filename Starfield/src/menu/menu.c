/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void menu(v_var *a)
{
    menu_params(a);
    while (sfRenderWindow_pollEvent(a->_ptr->window, &a->_ptr->event)) {
        if (a->_ptr->event.type == sfEvtClosed) {
            sfRenderWindow_close(a->_ptr->window);
        }
        if (a->_ptr->event.type == sfEvtKeyPressed
            && sfKeyboard_isKeyPressed(sfKeyEscape)) {
            sfRenderWindow_close(a->_ptr->window);
        }
        if (a->_ptr->event.type == sfEvtMouseButtonPressed) {
            go_to_duck(a);
        }
        if (a->_ptr->event.type == sfEvtMouseButtonPressed) {
            go_to_goku(a);
        }
        if (a->_ptr->event.type == sfEvtMouseButtonPressed) {
            go_to_boss(a);
        }
    }
    menu_display(a);
}

void menu_params(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_button_start, a->_menu->pos_button);
    a->_menu->button_rect =
    sfSprite_getGlobalBounds(a->_menu->s_button_start);
    sfSprite_setPosition(a->_menu->s_button_db, a->_menu->pos_button_db);
    a->_menu->button_db_rect =
    sfSprite_getGlobalBounds(a->_menu->s_button_db);
    sfSprite_setPosition(a->_menu->s_button_hell, a->_menu->pos_button_hell);
    a->_menu->button_hell_rect =
    sfSprite_getGlobalBounds(a->_menu->s_button_hell);
}

void go_to_duck(v_var *a)
{
    if (a->_base->mouse.x > a->_menu->button_rect.left && 
    a->_base->mouse.x < a->_menu->button_rect.left + 464
    && a->_base->mouse.y > a->_menu->button_rect.top && 
    a->_base->mouse.y < a->_menu->button_rect.top + 132) {
        a->status += 1;
        //sfMusic_play(a->_music->music_duck);
        //sfMusic_stop(a->_music->music_menu);
    }
}

void go_to_goku(v_var *a)
{
    if (a->_base->mouse.x > a->_menu->button_db_rect.left && 
    a->_base->mouse.x < a->_menu->button_db_rect.left + 464
    && a->_base->mouse.y > a->_menu->button_db_rect.top && 
    a->_base->mouse.y < a->_menu->button_db_rect.top + 132) {
        a->status += 2;
        //sfMusic_play(a->_music->music_dbz);
        //sfMusic_stop(a->_music->music_menu);
    }
}

void go_to_boss(v_var *a)
{
    if (a->_base->mouse.x > a->_menu->button_hell_rect.left && 
    a->_base->mouse.x < a->_menu->button_hell_rect.left + 464
    && a->_base->mouse.y > a->_menu->button_hell_rect.top && 
    a->_base->mouse.y < a->_menu->button_hell_rect.top + 132) {
        a->status += 3;
        //sfMusic_play(a->_music->boss_song);
        //sfMusic_stop(a->_music->music_menu);
    }
}