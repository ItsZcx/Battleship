/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-sokoban-joan-pau.merida-ruiz
** File description:
** help
*/

#include "lib.h"

int help(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        my_putstr("USAGE\n");
        my_putstr("    ./Battleship [first_player_pid] ship_positions\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("    first_player_pid: only for the 2nd player pid of the first player.\n");
        my_putstr("    ship_positions: file representing the positions of the ships.\n\n");
        my_putstr("FILE\n");
        my_putstr("    The file passed as parameter must contain lines formatted the following way:\n");
        my_putstr("      'LENGTH:FIRST_SQUARE:LAST_SQUARE'\n");
        my_putstr("    Where LENGTH is the length of the ship and FIRST_SQUARE-LAST_SQUARE are it's first and last positions.\n");
        my_putstr("    In this file, you must have 4 ships (of lengths 2, 3, 4 and 5).\n");
        my_putstr("EXAMPLE\n");
        my_putstr("    2:A1:A2\n    3:B6:D6\n    4:F3:F6\n    5:C8:G8\n");
        return (1);
    }
    return (0);
}