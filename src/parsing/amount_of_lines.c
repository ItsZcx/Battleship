/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** amount_of_lines
*/

#include "lib.h"

int amount_of_lines(int ac, char **av)
{
    int num = 0;
    size_t len = 0;
    FILE *fd = 0;
    if (ac == 2)
        fd = fopen(av[1], "r");
    else
        fd = fopen(av[2], "r");
    char *line_read = NULL;

    while (getline(&line_read, &len, fd) != -1)
        num++;
    fclose(fd);
    return (num);
}
