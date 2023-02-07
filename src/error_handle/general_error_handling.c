/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** general_error_handling
*/

#include "lib.h"

int general_error_handling(int ac, char **av)
{
    if (ac != 3 && ac != 2) {
        my_putstr("Error!\nYou are missing some argument!\n");
        return (84);
    }
    if (ac == 2) {
        if (host_error_handling(ac, av) == 84)
            return (84);
    } else {
        if (joiner_error_handling(ac, av) == 84)
            return (84);
    }
    return (0);
}
