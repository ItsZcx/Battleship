/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** joiner_error_handling
*/

#include "lib.h"

int joiner_error_handling(int ac, char **av)
{
    int fd = open(av[2], O_DIRECTORY);

    if (fd != -1) {
        my_putstr("Error!\nYou are not sending a file!\n");
        return (84);
    }
    if (errno != ENOTDIR)
        return (84);
    close(fd);
    return (0);
}
