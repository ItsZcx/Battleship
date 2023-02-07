/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** generate_user_map
*/

#include "lib.h"

void generate_user_map(void)
{
    int index = 0;
    Battleship->user_map = malloc(sizeof(char*) * 9);

    while (index < 8) {
        Battleship->user_map[index] = my_strdup(". . . . . . . .");
        index++;
    }
    Battleship->user_map[index] = NULL;
    edit_user_map();
}
