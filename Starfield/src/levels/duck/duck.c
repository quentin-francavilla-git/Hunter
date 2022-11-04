/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void duck_life(v_var *a)
{
    sfSprite_setTextureRect(a->_base->s_heart, a->_base->heart_rect);
    sfSprite_setScale(a->_base->s_heart, a->_base->scale_heart);
    if (a->_go->miss_count == 0)
        a->_base->heart_rect.width = 2700;
    if (a->_go->miss_count == 1)
        a->_base->heart_rect.width = 1800;
    if (a->_go->miss_count == 2)
        a->_base->heart_rect.width = 900;
    if (a->_go->miss_count == 3) {
        duck_reset(a);
        a->status = 4;
        //sfMusic_play(a->_music->music_game_over);
    }
    sfSprite_setPosition(a->_base->s_heart, a->_base->pos_heart);
}

void duck_reset(v_var *a)
{
    a->_go->miss_count = 0;
    //sfMusic_stop(a->_music->music_duck);
    sfRenderWindow_setMouseCursorVisible(a->_ptr->window, sfTrue);
    a->level = 0;
    a->_duck->pos.y = 300;
    a->_duck->pos.x = -110;
    a->side = 2;
    a->_duck->scale.x = 1;
    a->_duck->scale.y = 1;
    sfSprite_setScale(a->_duck->sprite, a->_duck->scale);
}

void duck_sprite_gestion(v_var *a)
{
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 0.15) {
        move_rect_duck(a);
        sfClock_restart(a->_ptr->clock);
    }
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock2);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 0.01) {
        duck_position(a);
        sfClock_restart(a->_ptr->clock2);
    }
}

void duck_reset_position(v_var *a)
{
    a->side = rand()%2+1;
    if (a->side == 1) {
        a->_duck->pos.x = 2090;
        a->_duck->start.y = rand()%750 + 100;
        a->_duck->pos.y = a->_duck->start.y;
        a->_duck->scale.x = -1;
        a->_duck->scale.y = 1;
    }
    else if (a->side == 2) {
        a->_duck->pos.x = -110;
        a->_duck->start.y = rand()%750+100;
        a->_duck->pos.y = a->_duck->start.y;
        a->_duck->scale.x = 1;
        a->_duck->scale.y = 1;
    }
    //sfMusic_play(a->_music->hit);
    sfSprite_setScale(a->_duck->sprite, a->_duck->scale);
    LEVEL
    a->scorei += 100;
}

void duck(v_var *a)
{
    duck_params(a);
    while (sfRenderWindow_pollEvent(a->_ptr->window, &a->_ptr->event)) {
        if (a->_ptr->event.type == sfEvtClosed) {
            sfRenderWindow_close(a->_ptr->window);
        }
        if (a->_ptr->event.type == sfEvtMouseButtonPressed) {
            duck_hitbox(a);
        }
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEscape)) {
            duck_reset(a);
            //sfMusic_play(a->_music->music_menu);
            a->status = 0;
        }
    }
    START_POSITION
    sfSprite_setPosition(a->_duck->sprite, a->_duck->pos);
    cursor(a);
    duck_life(a);
    duck_display(a);
}