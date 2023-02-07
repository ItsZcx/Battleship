/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** print_maps
*/

#include "lib.h"

void print_maps(void)
{
    my_putstr("my positions:\n |A B C D E F G H\n-+---------------\n");
    for (int index = 1; Battleship->user_map[index - 1]; index++) {
        my_put_nbr(index);
        my_putchar('|');
        my_putstr(Battleship->user_map[index - 1]);
        my_putstr("\n");
    }
    my_putstr("\nenemy's positions:\n |A B C D E F G H\n-+---------------\n");
    for (int index = 1; Battleship->enemy_map[index - 1]; index++) {
        my_put_nbr(index);
        my_putchar('|');
        my_putstr(Battleship->enemy_map[index - 1]);
        my_putstr("\n");
    }
    my_putstr("\n");
}
