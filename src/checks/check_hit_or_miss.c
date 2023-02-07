/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** check_hit_or_miss
*/

#include "lib.h"

void check_hit_or_miss(struct timespec time)
{
    my_putstr(Battleship->char_str_pos);
    my_putstr("");
    if (Battleship->user_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] != '.'
        && Battleship->user_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] != ' '
        && Battleship->user_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] != '\n') {
        my_putstr(": hit\n\n");
        Battleship->lost--;
        for (int index = 0; index < 3; index++) {
            kill(Battleship->joiner_pid, SIGUSR2);
            nanosleep(&time, NULL);
        }
        Battleship->user_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] = 'x';
    } else {
        my_putstr(": missed\n\n");
        for (int index = 0; index < 3; index++) {
            kill(Battleship->joiner_pid, SIGUSR1);
            nanosleep(&time, NULL);
        }
        Battleship->user_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] = 'o';
    }
}
