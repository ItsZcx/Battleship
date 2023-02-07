/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** bin_to_pos
*/

#include "lib.h"

void bin_to_pos(void)
{
    int zeros = 0;
    int num_ones = -1;
    int char_ones1 = -1;
    int char_ones2 = 0;

    for (int index = 0; Battleship->bin_str_pos[index]; index++) {
        if (Battleship->bin_str_pos[index] == '0')
            zeros++;
        if (zeros == 0 && Battleship->bin_str_pos[index] == '1') {
            char_ones1 = char_ones1 + 2;
            char_ones2++;
        }
        if (zeros == 1 && Battleship->bin_str_pos[index] == '1')
            num_ones++;
    }
    transform_first_char(char_ones2);
    transform_second_char(num_ones + 1);
}
