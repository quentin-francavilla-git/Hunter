/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void game_over_menu(v_var *a)
{
    a->max_value = 150;
    sfSprite_setPosition(a->_go->s_retry, a->_go->pos_retry);
    a->_go->rect_retry = sfSprite_getGlobalBounds(a->_go->s_retry);
    while (sfRenderWindow_pollEvent(a->_ptr->window, &a->_ptr->event)) {
        if (a->_ptr->event.type == sfEvtClosed) {
            sfRenderWindow_close(a->_ptr->window);
        }
        retry(a);
    }
    sfSprite_setScale(a->_go->s_dog, a->_go->scale_dog);
    if (a->status == 4) {
        game_over_duck(a);
    }
    else if (a->status == 5) {
        game_over_db(a);
    }
    else if (a->status == 6) {
        game_over_hell(a);
    }
    game_over_display(a);
}

void retry(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed 
    && sfKeyboard_isKeyPressed(sfKeyEscape)) {
        GO_RESET
    }
    if (a->_ptr->event.type == sfEvtMouseButtonPressed) {
        if (a->_base->mouse.x > a->_go->rect_retry.left 
        && a->_base->mouse.x < a->_go->rect_retry.left + 105.525
        && a->_base->mouse.y > a->_go->rect_retry.top 
        && a->_base->mouse.y < a->_go->rect_retry.top + 108) {
            GO_RESET
        }
    }
}

void game_over_duck(v_var *a)
{
    sfSprite_setTexture(a->_go->s_dog, a->_go->t_dog, sfTrue);
    sfSprite_setTexture(a->_go->s_b_game_over, 
    a->_duck->t_back_classique, sfTrue);
    sfSprite_setPosition(a->_go->s_dog, a->_go->pos_dog);
    sfSprite_setTextureRect(a->_go->s_dog, a->_go->rect_dog);
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 0.15) {
        move_rect_dog(a);
        sfClock_restart(a->_ptr->clock);
    }
}

void game_over_db(v_var *a)
{
    sfSprite_setTexture(a->_go->s_dog, a->_go->t_dog_db, sfTrue);
    sfSprite_setTexture(a->_go->s_b_game_over, 
    a->_db->t_back_db, sfTrue);
    sfSprite_setPosition(a->_go->s_dog, a->_go->pos_dog_db);
    sfSprite_setTextureRect(a->_go->s_dog, a->_go->rect_dog_db);
    a->_ptr->time = sfClock_getElapsedTime(a->_ptr->clock);
    a->seconds = a->_ptr->time.microseconds / 1000000.0;
    if (a->seconds > 0.15) {
        move_rect_dog_db(a);
        sfClock_restart(a->_ptr->clock);
    }
}

void game_over_hell(v_var *a)
{
    sfSprite_setTexture(a->_go->s_b_game_over, a->_hell->t_back_boss, 
    sfTrue);
    a->_go->pos_dog_db.x = 5000;
    a->_go->pos_dog_db.y = 5000;
    sfSprite_setPosition(a->_go->s_dog, a->_go->pos_dog_db);
    a->_go->pos_dog_db.x = 825;
    a->_go->pos_dog_db.y = 390;
}