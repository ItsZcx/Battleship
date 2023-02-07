/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** Write a function that counts and returns the number of
** characters found in the string passed as parameter.
*/

#include "c_lib.h"

int my_strlen(char *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return (count);
}
