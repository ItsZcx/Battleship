/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** info_error_handling
*/

#include "lib.h"

int info_error_handling(int *i)
{
    for (int q = 0; Battleship->info[*i][q] != NULL; q++) {
        if (*i != q && Battleship->info[*i][0][0] == Battleship->info[q][0][0])
            return (84);
    }
    for (int j = 1; Battleship->info[*i][j] != NULL; j++) {
        if (Battleship->info[*i][j][0] < 'A' || Battleship->info[*i][j][0] > 'H')
            return (84);
    }
    for (int k = 1; Battleship->info[*i][k] != NULL; k++) {
        if (Battleship->info[*i][k][1] < '1' || Battleship->info[*i][k][1] > '8')
            return (84);
    }
    for (int l = 0; Battleship->info[*i][l] != NULL; l++) {
        if (my_strcmp(Battleship->info[*i][1], Battleship->info[l][2]) == 0)
            return (84);
    }
}
