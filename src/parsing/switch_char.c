/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** switch_char
*/

#include "lib.h"

void switch_char(int i, int j)
{
    int repeat = 0;

    for (int x = 0; Battleship->info[i][j][x] != '\0'; x++) {
        first_cases(i, j);
        second_cases(i, j);
    }
}
