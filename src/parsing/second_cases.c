/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** second_cases
*/

#include "lib.h"

void second_cases(int i, int j)
{
    switch (Battleship->info[i][j][0]) {
        case 'E':
            Battleship->info[i][j] = my_strdup(my_charcat
                ("9", Battleship->info[i][j][1]));
            break;
        case 'F':
            Battleship->info[i][j] = my_strdup(my_charcat
                ("11", Battleship->info[i][j][1]));
            break;
        case 'G':
            Battleship->info[i][j] = my_strdup(my_charcat
                ("13", Battleship->info[i][j][1]));
            break;
        case 'H':
            Battleship->info[i][j] = my_strdup(my_charcat
                ("15", Battleship->info[i][j][1]));
            break;
    }
}
