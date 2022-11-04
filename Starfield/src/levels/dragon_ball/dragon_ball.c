/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_hunter.h"
#include "../../../lib/my/lib.h"

void dragon_ball_reset(v_var *a)
{
    a->_go->miss_count = 0;
    //sfMusic_stop(a->_music->music_dbz);
    sfRenderWindow_setMouseCursorVisible(a->_ptr->window, sfTrue);
    a->_db->pos_shenron.x = -2300;
    a->_db->pos_shenron.y = 1700;
    a->level = 0;
    a->_duck->pos.y = 300;
    a->_duck->pos.x = -110;
    a->side = 2;
    a->_duck->scale.x = 1;
    a->_duck->scale.y = 1;
    sfSprite_setScale(a->_db->s_goku, a->_duck->scale);
}

void dragon_ball_sprite_gestion(v_var *a)
{
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 0.1) {
        move_rect_goku(a);
        sfClock_restart(a->_ptr->clock);
    }
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock2);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 0.01) {
        duck_position(a);
        sfClock_restart(a->_ptr->clock2);
    }
}

void db_reset_position(v_var *a)
{
    a->side = rand()%2 + 1;
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
    sfSprite_setScale(a->_db->s_goku, a->_duck->scale);
    LEVEL
    a->scorei += 100;
}

void db_life(v_var *a)
{
    sfSprite_setScale(a->_base->s_heart, a->_base->scale_heart);
    if (a->_go->miss_count == 0)
        a->_base->heart_rect.width = 2700;
    if (a->_go->miss_count == 1)
        a->_base->heart_rect.width = 1800;
    if (a->_go->miss_count == 2)
        a->_base->heart_rect.width = 900;
    if (a->_go->miss_count == 3) {
        dragon_ball_reset(a);
        //sfMusic_play(a->_music->music_game_over);
        a->status = 5;
    }
    sfSprite_setPosition(a->_base->s_heart, a->_base->pos_heart);
}

void dragon_ball(v_var *a)
{
    dragon_ball_params(a);
    while (sfRenderWindow_pollEvent(a->_ptr->window, &a->_ptr->event)) {
        if (a->_ptr->event.type == sfEvtClosed)
            sfRenderWindow_close(a->_ptr->window);
        if (a->_ptr->event.type == sfEvtMouseButtonPressed) {
            dragon_ball_hitbox(a);
        }
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEscape)) {
            dragon_ball_reset(a);
            //sfMusic_play(a->_music->music_menu);
            a->status = 0;
        }
    }
    START_POSITION
    sfSprite_setPosition(a->_db->s_goku, a->_duck->pos);
    cursor(a);
    shenron(a);
    db_life(a);
    dragon_ball_display(a);
}