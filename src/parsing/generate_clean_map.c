/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** generate_clean_map
*/

#include "lib.h"

void generate_clean_map(void)
{
    int index = 0;
    Battleship->clean_map = malloc(sizeof(char*) * 9);
    Battleship->enemy_map = malloc(sizeof(char*) * 9);

    while (index < 8) {
        Battleship->enemy_map[index] = my_strdup(". . . . . . . .");
        Battleship->clean_map[index] = my_strdup(". . . . . . . .");
        index++;
    }
    Battleship->clean_map[index] = NULL;
    Battleship->enemy_map[index] = NULL;
}
