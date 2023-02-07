/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** transform_second_char
*/

#include "lib.h"

void transform_second_char(int num_ones)
{
    switch (num_ones) {
        case 1: Battleship->char_str_pos[1] = '1'; break;
        case 2: Battleship->char_str_pos[1] = '2'; break;
        case 3: Battleship->char_str_pos[1] = '3'; break;
        case 4: Battleship->char_str_pos[1] = '4'; break;
        case 5: Battleship->char_str_pos[1] = '5'; break;
        case 6: Battleship->char_str_pos[1] = '6'; break;
        case 7: Battleship->char_str_pos[1] = '7'; break;
        case 8: Battleship->char_str_pos[1] = '8'; break;
    }
    Battleship->char_str_pos[2] = '\0';
}
