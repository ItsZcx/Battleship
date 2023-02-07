/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** transform_first_char
*/

#include "lib.h"

void transform_first_char(int char_ones)
{
    switch (char_ones) {
        case 1: Battleship->char_str_pos[0] = 'A'; break;
        case 2: Battleship->char_str_pos[0] = 'B'; break;
        case 3: Battleship->char_str_pos[0] = 'C'; break;
        case 4: Battleship->char_str_pos[0] = 'D'; break;
        case 5: Battleship->char_str_pos[0] = 'E'; break;
        case 6: Battleship->char_str_pos[0] = 'F'; break;
        case 7: Battleship->char_str_pos[0] = 'G'; break;
        case 8: Battleship->char_str_pos[0] = 'H'; break;
    }
}
