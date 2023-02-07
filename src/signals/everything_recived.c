/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** everything_recived
*/

#include "lib.h"

bool everything_recived(struct timespec time)
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
    if (my_strlen(Battleship->bin_str_pos) != 3 && zeros == 2)
        return (true);
    return (false);
}
