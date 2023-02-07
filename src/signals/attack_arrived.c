/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** attack_arrived
*/

#include "lib.h"

bool attack_arrived(struct timespec time)
{
    int zeros = 0;

    for (int index = 0; Battleship->bin_str_pos[index]; index++) {
        nanosleep(&time, NULL);
        if (Battleship->bin_str_pos[index] == '0')
            zeros++;
    }
    if (my_strlen(Battleship->bin_str_pos) != 3 && zeros == 2)
        return (true);
    return (false);
}
