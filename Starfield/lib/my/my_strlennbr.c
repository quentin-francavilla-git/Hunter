/*
** EPITECH PROJECT, 2018
** hh
** File description:
** hh
*/

int my_strlennbr(int n)
{
    int i = 1;

    if (n < 10) {
        n = n * -1;
    }
    while (n >= 10) {
        n /= 10;
        i = i + 1;
    }
    return (i);
}