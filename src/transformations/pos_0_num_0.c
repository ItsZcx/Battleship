/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** pos_0_num_0
*/

#include "lib.h"

void pos_0_num_0(void)
{
    switch (Battleship->char_str_pos[0]) {
        case 'A': Battleship->pos_num[0] = 0; break;
        case 'B': Battleship->pos_num[0] = 2; break;
        case 'C': Battleship->pos_num[0] = 4; break;
        case 'D': Battleship->pos_num[0] = 6; break;
        case 'E': Battleship->pos_num[0] = 8; break;
        case 'F': Battleship->pos_num[0] = 10; break;
        case 'G': Battleship->pos_num[0] = 12; break;
        case 'H': Battleship->pos_num[0] = 14; break;
    }
}
