/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** signal_handlers
*/

#include "lib.h"

void signal_handlers(int sigint, siginfo_t *info, void *context)
{
    switch (sigint) {
        case SIGINT:
            my_putstr("enemy connected\n\n");
            Battleship->joiner_pid = info->si_pid;
            break;
        case SIGUSR1:
            Battleship->bin_str_pos = my_charcat(Battleship->bin_str_pos, '1');
            break;
        case SIGUSR2:
            Battleship->bin_str_pos = my_charcat(Battleship->bin_str_pos, '0');
            break;
    }
}
