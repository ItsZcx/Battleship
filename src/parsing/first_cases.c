/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** first_cases
*/

#include "lib.h"

void first_cases(int i, int j)
{
    switch (Battleship->info[i][j][0]) {
        case 'A':
            Battleship->info[i][j] = my_strdup(my_charcat
                ("1", Battleship->info[i][j][1]));
            break;
        case 'B':
            Battleship->info[i][j] = my_strdup(my_charcat
                ("3", Battleship->info[i][j][1]));
            break;
        case 'C':
            Battleship->info[i][j] = my_strdup(my_charcat
                ("5", Battleship->info[i][j][1]));
            break;
        case 'D':
            Battleship->info[i][j] = my_strdup(my_charcat
                ("7", Battleship->info[i][j][1]));
            break;
    }
}
