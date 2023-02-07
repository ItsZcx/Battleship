/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** parsing
*/

#include "lib.h"

int parsing(int ac, char **av)
{
    Battleship->info = read_file(ac, av);
    Battleship->amount_of_ships = amount_of_lines(ac, av);

    if (parsing_error_handling() == 84)
        return (84);
    if (ac == 3)
        Battleship->joiner_pid = my_get_nbr(av[1]);
    for (int i = 0; Battleship->info[i] != NULL; i++) {
        for (int j = 0; Battleship->info[i][j] != NULL; j++)
            switch_char(i, j);
    }
    return (0);
}
