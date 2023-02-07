/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** hit_miss_arrived
*/

#include "lib.h"

int hit_miss_arrived(struct timespec time)
{
    int ones = 0;
    int zeros = 0;

    for (int index = 0; Battleship->bin_str_pos[index]; index++) {
        nanosleep(&time, NULL);
        if (Battleship->bin_str_pos[index] == '0')
            zeros++;
        if (Battleship->bin_str_pos[index] == '1')
            ones++;
    }
    if (conditions_hit_miss_arrived(time, ones, zeros) == 1)
        return (1);
    return (0);
}
