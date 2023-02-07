/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** print_start
*/

#include "lib.h"

void print_start(void)
{
    if (Battleship->turn == true) {
        Battleship->host_pid = getpid();
        my_putstr("my_pid: ");
        my_put_nbr(Battleship->host_pid);
        my_putstr("\nwaiting for enemy connection...\n\n");
        pause();
    } else if (Battleship->turn == false) {
        Battleship->host_pid = getpid();
        my_putstr("my_pid: ");
        my_put_nbr(Battleship->host_pid);
        kill(Battleship->joiner_pid, SIGINT);
        my_putstr("\nsuccessfully connected\n\n");
    }
}
