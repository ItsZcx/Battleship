/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** print_actions
*/

#include "lib.h"

int print_actions(void)
{
    struct timespec time;
    Battleship->hit = 0;
    size_t len = 0;
    time.tv_sec = 0;
    time.tv_nsec = 1000000;

    if (Battleship->turn == true) {
        switch (host_actions(time, len)) {
            case 1: return (1);
            case 84: return (84);
        }
    } else {
        switch (joiner_actions(time, len)) {
            case 1: return (1);
            case 84: return (84);
        }
    }
    if (check_for_win(time) == 1)
        return (1);
    return (0);
}
