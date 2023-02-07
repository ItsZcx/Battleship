/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** pos_1_num_1
*/

#include "lib.h"

void pos_1_num_1(void)
{
    switch (Battleship->char_str_pos[1]) {
        case '1': Battleship->pos_num[1] = 1; break;
        case '2': Battleship->pos_num[1] = 2; break;
        case '3': Battleship->pos_num[1] = 3; break;
        case '4': Battleship->pos_num[1] = 4; break;
        case '5': Battleship->pos_num[1] = 5; break;
        case '6': Battleship->pos_num[1] = 6; break;
        case '7': Battleship->pos_num[1] = 7; break;
        case '8': Battleship->pos_num[1] = 8; break;
    }
}
