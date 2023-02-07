/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** check_for_win
*/

#include "lib.h"

int check_for_win(struct timespec time)
{
    if (Battleship->lost == 0) {
        my_putstr("\n");
        print_maps();
        my_putstr("Enemy won\n");
        return (1);
    }
    if (Battleship->won == 0) {
        my_putstr("\n");
        print_maps();
        my_putstr("I won\n");
        return (1);
    }
    return (0);
}
