/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** conditions_hit_miss_arrived
*/

#include "lib.h"

int conditions_hit_miss_arrived(struct timespec time, int ones, int zeros)
{
    if (my_strlen(Battleship->bin_str_pos) == 3 && zeros == 3) {
        my_putstr(change_lastchar(Battleship->char_str_pos));
        my_putstr(": hit\n\n");
        Battleship->hit = 1;
        Battleship->won--;
        return (1);
    }
    if (my_strlen(Battleship->bin_str_pos) == 3 && ones == 3) {
        my_putstr(change_lastchar(Battleship->char_str_pos));
        my_putstr(": missed\n\n");
        Battleship->hit = 2;
        return (1);
    }
    return (0);
}
