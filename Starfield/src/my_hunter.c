/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/my_hunter.h"
#include "../lib/my/lib.h"

void window(v_var *a)
{
    start_window(a);
    while (sfRenderWindow_isOpen(a->_ptr->window)) {
        a->_base->mouse = sfMouse_getPosition((sfWindow *)a->_ptr->window);
        if (a->status == 0) {
            menu(a);
        }
        if (a->status == 1) {
            duck(a);
        }
        if (a->status == 2) {
            dragon_ball(a);
        }
        if (a->status == 3) {
            hell(a);
        }
        if (a->status == 4 || a->status == 5 || a->status == 6) {
            game_over_menu(a);
        }
    }
    destroy(a);
}

void malloc_struct(v_var *a)
{
    a->_ptr = malloc(sizeof(t_window));
    a->_duck = malloc(sizeof(t_duck));
    a->_db = malloc(sizeof(t_db));
    a->_hell = malloc(sizeof(t_hell));
    a->_menu = malloc(sizeof(t_menu));
    a->_go = malloc(sizeof(t_game_over));
    a->_base = malloc(sizeof(t_base));
}

int main(int ac, char **av)
{
    srand(time(NULL));
    v_var *a = malloc(sizeof(v_var));
    malloc_struct(a);
    variables(a);
    create_sprite(a);
    create_text(a);
    //create_music(a);
    create_clock(a);
    rect(a);
    if (ac == 2 && av[1][1] == 'h') {
        my_putstr(a->usage);
        destroy(a);
        return (0);
    }
    window(a);
    return (0);
}