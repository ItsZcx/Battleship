/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** get_y_positions
*/

#include "lib.h"

int get_y_positions(int *y, int *y2, int i)
{
    if (my_strlen(Battleship->info[i][1]) == 3)
        (*y) = my_get_cnbr(Battleship->info[i][1][2]);
    else if (my_strlen(Battleship->info[i][1]) == 2)
        (*y) = my_get_cnbr(Battleship->info[i][1][1]);
    if (my_strlen(Battleship->info[i][2]) == 3)
        (*y2) = my_get_cnbr(Battleship->info[i][2][2]);
    else if (my_strlen(Battleship->info[i][2]) == 2)
        (*y2) = my_get_cnbr(Battleship->info[i][2][1]);
    return ((*y));
}
