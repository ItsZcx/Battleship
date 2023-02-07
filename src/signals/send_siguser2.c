/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** send_siguser2
*/

#include "lib.h"

void send_siguser2(int which_case, struct timespec time)
{
    if (which_case != 0) {
        kill(Battleship->joiner_pid, SIGUSR2);
        nanosleep(&time, NULL);
    }
}
