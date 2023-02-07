/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** int_cases copy
*/

#include "lib.h"

void char_cases(char *pos, struct timespec time)
{
    int which_char_case = 0;

    switch (pos[0]) {
        case 'A': which_char_case = 1; break;
        case 'B': which_char_case = 2; break;
        case 'C': which_char_case = 3; break;
        case 'D': which_char_case = 4; break;
        case 'E': which_char_case = 5; break;
        case 'F': which_char_case = 6; break;
        case 'G': which_char_case = 7; break;
        case 'H': which_char_case = 8; break;
    }
    for (int index = 0; index < which_char_case; index++) {
        kill(Battleship->joiner_pid, SIGUSR1);
        nanosleep(&time, NULL);
    }
    send_siguser2(which_char_case, time);
}
