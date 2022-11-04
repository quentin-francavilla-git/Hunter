/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef HUNTER_H_
#define HUNTER_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <SFML/Window.h>

typedef struct s_window
{
    sfRenderWindow *window;
    sfTime time;
    sfTexture* b_texture;
    sfSprite* back;
    sfTexture *cursor;
    sfSprite *s_cursor;
    sfEvent event;
    sfText *score;
    sfFont* font;
    sfTexture *t_heart;
    sfClock *clock;
    sfClock *clock2;
    sfClock *clock5;
    sfClock *clock_boss;
    sfClock *clock_shenron;
} t_window;

typedef struct s_base
{
    sfSprite *s_heart;
    sfVector2f scale_cursor;
    sfVector2f pos_score;
    sfVector2i mouse;
    sfVector2f mousei;
    sfVector2f scale_heart;
    sfVector2f pos_heart;
    sfIntRect heart_rect;
    sfVector2i window_pos;
    sfFloatRect sprite_rect;
}t_base;

typedef struct s_duck
{
    sfTexture* texture;
    sfSprite* sprite;
    sfTexture *t_back_classique;
    sfSprite *s_back_classique;
    sfVector2f pos;
    sfVector2f start;
    sfVector2f scale;
    sfIntRect rect;
} t_duck;

typedef struct s_db
{
    sfIntRect rect_goku;
    sfVector2f scale_shenron;
    sfVector2f pos_shenron;
    sfSprite *s_back_db;
    sfTexture *t_back_db;
    sfTexture *t_goku;
    sfSprite *s_goku;
    sfTexture *t_shenron;
    sfSprite *s_shenron;
} t_db;

typedef struct s_hell
{
    int angle_boss;
    sfVector2f posb;
    sfVector2f pos_barre;
    sfVector2f pos_barre_rouge;
    sfVector2f scale_barres;
    sfVector2f scale_red_cursor;
    sfTexture *t_red_cursor;
    sfSprite *s_red_cursor;
    sfVector2f scale_boss;
    sfIntRect rect_boss;
    sfSprite *s_back_boss;
    sfTexture *t_back_boss;
    sfTexture *t_boss;
    sfSprite *s_boss;
    sfTexture *t_barre;
    sfSprite *s_barre;
    sfTexture *t_barre_rouge;
    sfSprite *s_barre_rouge;
    sfIntRect rect_barre_rouge;
} t_hell;

typedef struct s_game_over
{
    int miss_count;
    int hit_count;
    sfVector2f scale_retry;
    sfVector2f pos_retry;
    sfFloatRect rect_retry;
    sfVector2f pos_dog_db;
    sfVector2f scale_dog;
    sfIntRect rect_dog;
    sfIntRect rect_dog_db;
    sfVector2f pos_dog;
    sfTexture *t_dog;
    sfTexture *t_dog_db;
    sfSprite *s_dog;
    sfSprite *s_retry;
    sfTexture *t_retry;
    sfText *game_over;
    sfSprite *s_b_game_over;
    sfVector2f pos_game_over;
} t_game_over;

typedef struct s_music
{
    sfMusic *music_game_over;
    sfMusic *music_dbz;
    sfMusic *music_duck;
    sfMusic *music_menu;
    sfMusic *boss_song;
    sfMusic *laugh;
    sfMusic *hit;
    sfMusic *miss;
} t_music;

typedef struct s_menu
{
    sfSprite *s_button_start;
    sfTexture *t_button_start;
    sfSprite *s_button_db;
    sfTexture *t_button_db;
    sfSprite *s_button_hell;
    sfTexture *t_button_hell;
    sfVector2f pos_button;
    sfVector2f pos_button_db;
    sfFloatRect button_rect;
    sfFloatRect button_db_rect;
    sfVector2f pos_button_hell;
    sfFloatRect button_hell_rect;
} t_menu;

typedef struct v_variable
{
    int status;
    int side;
    int level;
    int v_y1;
    int max_value;
    float seconds;
    int scorei;
    float angle;
    int i;
    int x;
    char *usage;
    t_window       *_ptr;
    t_duck      *_duck;
    t_db        *_db;
    t_hell        *_hell;
    t_menu      *_menu;
    t_music     *_music;
    t_game_over *_go;
    t_base      *_base;
} v_var;

/*tools*/
void cursor(v_var *a);
void cursor_red(v_var *a);
void destroy(v_var *a);

void move_rect(v_var *a);
void dragon_ball(v_var *a);
void menu(v_var *a);
void duck(v_var *a);
void boss_move(v_var *a);
void new_bird(v_var *a);
void move_rect_duck(v_var *a);
void move_rect_goku(v_var *a);
void move_rect_boss(v_var *a);
void move_rect_dog(v_var *a);
void move_rect_dog_db(v_var *a);
void hell(v_var *a);
void game_over_menu(v_var *a);
void start_window(v_var *a);
void create_clock(v_var *a);
int create_music(v_var *a);
void create_text(v_var *a);

/*Var*/
void variables(v_var *a);
void variables_bases(v_var *a);
void variables_menu(v_var *a);
void variables_game_over(v_var *a);
void variables_duck(v_var *a);
void variables_db(v_var *a);
void variables_boss(v_var *a);
void variables_usage(v_var *a);

/*Rect*/
void rect(v_var *a);
void rect_duck(v_var *a);
void rect_db(v_var *a);
void rect_hell(v_var *a);
void rect_game_over(v_var *a);

/* Sprite*/
void create_sprite(v_var *a);
void create_sprite2(v_var *a);
void create_sprite3(v_var *a);
void create_sprite4(v_var *a);

/* Menu */
void menu(v_var *a);
void menu_params(v_var *a);
void menu_display(v_var *a);
void go_to_duck(v_var *a);
void go_to_goku(v_var *a);
void go_to_boss(v_var *a);

/* game over */
void game_over_display(v_var *a);
void retry(v_var *a);
void game_over_duck(v_var *a);
void game_over_db(v_var *a);
void game_over_hell(v_var *a);

/*duck*/
void duck_display(v_var *a);
void duck_life(v_var *a);
void duck_reset(v_var *a);
void duck_sprite_gestion(v_var *a);
void duck_hitbox(v_var *a);
void duck_reset_position(v_var *a);
void duck_params(v_var *a);
void duck_position(v_var *a);

/* DB */
void dragon_ball(v_var *a);
void dragon_ball_params(v_var *a);
void dragon_ball_sprite_gestion(v_var *a);
void dragon_ball_display(v_var *a);
void dragon_ball_hitbox(v_var *a);
void db_reset_position(v_var *a);
void shenron(v_var *a);

/*hell*/
void hell_display(v_var *a);
void hell_sprite_gestion(v_var *a);
void boss_hitbox(v_var *a);
void hell_params(v_var *a);
void hell_life(v_var *a);
void boss_reset(v_var *a);
void boss_reset(v_var *a);

/*game_over MACCRO*/
#define GO_RESET a->status = 0;a->level = 0;sfMusic_play(a->_music->music_menu);

/*tools MACCRO*/
#define START_POSITION if (a->level == 0) {a->_duck->pos.y = 300;}
#define LEVEL a->level += 1;if (a->level >= 20) {a->level = 20;}

#endif
