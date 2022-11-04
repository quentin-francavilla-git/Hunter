/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void create_sprite(v_var *a)
{
    create_sprite2(a);
    create_sprite3(a);
    create_sprite4(a);
    a->_go->s_b_game_over = sfSprite_create();
    a->_ptr->cursor = sfTexture_createFromFile("./img/cursor.png", NULL);
    a->_ptr->s_cursor = sfSprite_create();
    sfSprite_setTexture(a->_ptr->s_cursor, a->_ptr->cursor, sfTrue);
    a->_hell->t_red_cursor = sfTexture_createFromFile("./img/red_cursor.png", 
    NULL);
    a->_hell->s_red_cursor = sfSprite_create();
    sfSprite_setTexture(a->_hell->s_red_cursor, a->_hell->t_red_cursor,
    sfTrue);
    a->_menu->t_button_start = 
    sfTexture_createFromFile("./img/start_button.png", 
    NULL);
    a->_menu->s_button_start = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_button_start, 
    a->_menu->t_button_start, sfTrue);
}

void create_sprite2(v_var *a)
{
    a->_go->t_retry = sfTexture_createFromFile("./img/retry.png", NULL);
    a->_go->s_retry = sfSprite_create();
    sfSprite_setTexture(a->_go->s_retry, a->_go->t_retry, sfTrue);
    a->_go->t_dog = sfTexture_createFromFile("./img/dog.png", NULL);
    a->_go->t_dog_db = sfTexture_createFromFile("./img/dog_db.png", NULL);
    a->_go->s_dog = sfSprite_create();
    a->_duck->t_back_classique = 
    sfTexture_createFromFile("./img/back_classique.png", NULL);
    a->_duck->s_back_classique = sfSprite_create();
    sfSprite_setTexture(a->_duck->s_back_classique, 
    a->_duck->t_back_classique, sfTrue);
    a->_db->t_back_db = sfTexture_createFromFile("./img/back_db.png", NULL);
    a->_db->s_back_db = sfSprite_create();
    sfSprite_setTexture(a->_db->s_back_db, a->_db->t_back_db, sfTrue);
    a->_ptr->t_heart = sfTexture_createFromFile("./img/heart.png", NULL);
    a->_base->s_heart = sfSprite_create();
}

void create_sprite3(v_var *a)
{
    sfSprite_setTexture(a->_base->s_heart, a->_ptr->t_heart, sfTrue);
    a->_hell->t_back_boss = sfTexture_createFromFile("./img/back_boss.jpg", 
    NULL);
    a->_hell->s_back_boss = sfSprite_create();
    sfSprite_setTexture(a->_hell->s_back_boss, a->_hell->t_back_boss, sfTrue);
    a->_db->t_goku = sfTexture_createFromFile("./img/goku_cloud.png", NULL);
    a->_db->s_goku = sfSprite_create();
    sfSprite_setTexture(a->_db->s_goku, a->_db->t_goku, sfTrue);
    a->_hell->t_boss = sfTexture_createFromFile("./img/boss.png", NULL);
    a->_hell->s_boss = sfSprite_create();
    sfSprite_setTexture(a->_hell->s_boss, a->_hell->t_boss, sfTrue);
    a->_db->t_shenron = sfTexture_createFromFile("./img/shenron.png", NULL);
    a->_db->s_shenron = sfSprite_create();
    a->_hell->s_barre = sfSprite_create();
    a->_hell->t_barre = sfTexture_createFromFile("./img/barre.png", NULL);
    sfSprite_setTexture(a->_hell->s_barre, a->_hell->t_barre, sfTrue);
    a->_hell->s_barre_rouge = sfSprite_create();
    a->_hell->t_barre_rouge =
    sfTexture_createFromFile("./img/barre_rouge.png", NULL);
}

void create_sprite4(v_var *a)
{
    sfSprite_setTexture(a->_hell->s_barre_rouge, a->_hell->t_barre_rouge,
    sfTrue);
    sfSprite_setTexture(a->_db->s_shenron, a->_db->t_shenron, sfTrue);
    a->_menu->t_button_db = sfTexture_createFromFile("./img/db.png", NULL);
    a->_menu->s_button_db = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_button_db, a->_menu->t_button_db, sfTrue);
    a->_menu->t_button_hell = sfTexture_createFromFile("./img/hell.png", NULL);
    a->_menu->s_button_hell = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_button_hell, a->_menu->t_button_hell,
    sfTrue);
    a->_duck->sprite = sfSprite_create();
    a->_ptr->back = sfSprite_create();
    a->_duck->texture = sfTexture_createFromFile("./img/duck.png", NULL);
    a->_ptr->b_texture = sfTexture_createFromFile("./img/back.png", NULL);
    sfSprite_setTexture(a->_ptr->back, a->_ptr->b_texture, sfTrue);
    sfSprite_setTexture(a->_duck->sprite, a->_duck->texture, sfTrue);
    sfTexture_setSmooth(a->_duck->texture, sfTrue);
}