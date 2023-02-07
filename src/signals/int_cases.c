/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** int_cases
*/

#include "lib.h"

void int_cases(char *pos, struct timespec time)
{
    int which_int_case = 0;

    switch (pos[1]) {
        case '1': which_int_case = 1; break;
        case '2': which_int_case = 2; break;
        case '3': which_int_case = 3; break;
        case '4': which_int_case = 4; break;
        case '5': which_int_case = 5; break;
        case '6': which_int_case = 6; break;
        case '7': which_int_case = 7; break;
        case '8': which_int_case = 8; break;
        case '9': which_int_case = 9; break;
    }
    for (int index = 0; index < which_int_case; index++) {
        kill(Battleship->joiner_pid, SIGUSR1);
        nanosleep(&time, NULL);
    }
    send_siguser2(which_int_case, time);
}
