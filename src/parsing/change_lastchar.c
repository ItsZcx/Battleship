/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** change_lastchar
*/

#include "lib.h"

char *change_lastchar(char *src)
{
    int index = 0;

    while (src[index] && src[index] != '\n')
        index++;
    src[index] = '\0';
    return (src);
}
