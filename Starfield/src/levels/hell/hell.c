/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void boss_reset(v_var *a)
{
    a->_go->hit_count = 0;
    //sfMusic_stop(a->_music->boss_song);
    sfRenderWindow_setMouseCursorVisible(a->_ptr->window, sfTrue);
    a->_hell->posb.x = 575;
    a->_hell->posb.y = 90;
    a->level = 0;
    a->_go->miss_count = 0;
    a->_duck->pos.y = 300;
    a->_duck->pos.x = -110;
    a->side = 2;
}

void hell_sprite_gestion(v_var *a)
{
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 0.15) {
        move_rect_boss(a);
        sfClock_restart(a->_ptr->clock);
    }
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock2);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 1) {
        a->side = rand()%2+1;
        a->_hell->angle_boss = rand()%10-5;
        sfClock_restart(a->_ptr->clock2);
    }
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock_boss);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 0.01) {
        boss_move(a);
        sfClock_restart(a->_ptr->clock_boss);
    }
}

void hell_life(v_var *a)
{
    sfSprite_setScale(a->_base->s_heart, a->_base->scale_heart);
    if (a->_go->miss_count == 0)
        a->_base->heart_rect.width = 2700;
    if (a->_go->miss_count == 1)
        a->_base->heart_rect.width = 1800;
    if (a->_go->miss_count == 2)
        a->_base->heart_rect.width = 900;
    if (a->_go->miss_count == 3) {
        boss_reset(a);
        a->status = 6;
        a->x = 0;
        a->i = 0;
        //sfMusic_play(a->_music->music_game_over);
    }
    sfSprite_setPosition(a->_base->s_heart, a->_base->pos_heart);
}

void boss_life(v_var *a)
{
    sfSprite_setScale(a->_hell->s_barre, a->_hell->scale_barres);
    sfSprite_setScale(a->_hell->s_barre_rouge, a->_hell->scale_barres);
    sfSprite_setPosition(a->_hell->s_barre, a->_hell->pos_barre);
    sfSprite_setPosition(a->_hell->s_barre_rouge, a->_hell->pos_barre_rouge);
    if (a->_go->hit_count < 62)
        a->_hell->rect_barre_rouge.width = -a->_go->hit_count * 11.8 + 721;
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock5);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 5 && a->_go->hit_count > 2 && a->x == 3) {
        a->_go->hit_count -= 1;
        sfClock_restart(a->_ptr->clock5);
    }
}

void hell(v_var *a)
{
    hell_params(a);
    while (sfRenderWindow_pollEvent(a->_ptr->window, &a->_ptr->event)) {
        if (a->_ptr->event.type == sfEvtClosed) {
            sfRenderWindow_close(a->_ptr->window);
        }
        if (a->_ptr->event.type == sfEvtMouseButtonPressed) {
            boss_hitbox(a);
        }
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEscape)) {
            boss_reset(a);
            //sfMusic_play(a->_music->music_menu);
            a->status = 0;
        }
    }
    sfSprite_setPosition(a->_hell->s_boss, a->_hell->posb);
    cursor_red(a);
    hell_life(a);
    boss_life(a);
    hell_display(a);
}