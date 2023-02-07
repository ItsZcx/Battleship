/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** read_file
*/

#include "lib.h"

char ***read_file(int ac, char **av)
{
    int j = 0;
    size_t len = 0;
    char *line_read = NULL;
    FILE *fd = 0;

    if (ac == 2)
        fd = fopen(av[1], "r");
    else
        fd = fopen(av[2], "r");
    char ***arr = malloc(sizeof(char*) * (amount_of_lines(ac, av) + 1));
    while (getline(&line_read, &len, fd) != -1) {
        char *tmp = change_lastchar(my_strdup(line_read));
        arr[j] = my_str_to_word_array(tmp, ':');
        j++;
    }
    arr[j] = NULL;
    fclose(fd);
    return (arr);
}
