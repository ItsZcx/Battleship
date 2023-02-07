/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** edit_user_map
*/

#include "lib.h"

void edit_user_map(void)
{
    int index = 0;

    while (Battleship->info[index] != NULL) {
        build_ship(index);
        index++;
    }
}
