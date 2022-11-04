/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_hunter.h"
#include "../../lib/my/lib.h"

void move_rect_dog(v_var *a)
{
    if (a->_go->rect_dog.left == a->max_value) {
        a->_go->rect_dog.left = 0;
    }
    else {
        a->_go->rect_dog.left += a->_go->rect_dog.width;
    }
}

void move_rect_dog_db(v_var *a)
{
    if (a->_go->rect_dog_db.left == a->max_value) {
        a->_go->rect_dog_db.left = 0;
    }
    else {
        a->_go->rect_dog_db.left += a->_go->rect_dog_db.width;
    }
}