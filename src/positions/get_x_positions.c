/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** get_x_position
*/

#include "lib.h"

int get_x_positions(int *x, int *x2, int i)
{
    if (my_strlen(Battleship->info[i][1]) == 3)
        (*x) = my_get_nbr(my_cut_str(Battleship->info[i][2], 2));
    else if (my_strlen(Battleship->info[i][1]) == 2)
        (*x) = my_get_nbr(my_cut_str(Battleship->info[i][1], 1));
    if (my_strlen(Battleship->info[i][2]) == 3)
        (*x2) = my_get_nbr(my_cut_str(Battleship->info[i][2], 2));
    else if (my_strlen(Battleship->info[i][2]) == 2)
        (*x2) = my_get_cnbr(Battleship->info[i][2][0]);
    return ((*x));
}
