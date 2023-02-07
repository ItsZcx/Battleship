/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** send_bin
*/

#include "lib.h"

void send_bin(struct timespec time)
{
    char_cases(Battleship->char_str_pos, time);
    int_cases(Battleship->char_str_pos, time);
}
