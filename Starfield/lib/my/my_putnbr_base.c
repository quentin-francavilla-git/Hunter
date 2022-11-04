/*
** EPITECH PROJECT, 2018
** my_putchar.c
** File description:
** 
*/

#include "my_put_nbr_base.h"
#include "lib.h"
#include <stdio.h>

void my_put_nbr_base(int nbr, char const *base)
{
    VARIABLES;

    nbr = negative(nbr);
    while (i < 50) {
        i += 1;
        div = nbr / basenbr;
        mod = nbr % basenbr;
        nbr = div;
        revalpha[i] = (base[mod]);
    }
    i = 0;
    while (revalpha[50 - i] == '0') {
        i = i + 1;
    }
    while (i < 50) {
        my_putchar(revalpha[50 - i]);
        i = i + 1;
    }
}

int negative(int nbr)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * -1;
        return (nbr);
    }
    else {
        nbr = nbr;
        return (nbr);
    }
}