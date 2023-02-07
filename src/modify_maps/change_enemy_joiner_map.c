/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** change_enemy_joiner_map
*/

#include "lib.h"

void change_enemy_joiner_map(void)
{
    if (Battleship->hit == 2
        && Battleship->enemy_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] == '.')
        Battleship->enemy_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] = 'o';
    if (Battleship->hit == 1
        && Battleship->enemy_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] != ' '
        && Battleship->enemy_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] != '\n'
        && Battleship->enemy_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] != '\0'
        && Battleship->enemy_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] != 'o') {
        Battleship->enemy_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] = 'x';
    }
}
