/*
** EPITECH PROJECT, 2022
** my_strdup
** File description:
** Write a function that allocates memory and
** copies the string given as argument in it
*/

#include "c_lib.h"
#include <stdlib.h>

char *my_strdup(char *src)
{
    int index = 0;
    char *result;

    result = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[index] != '\0') {
        result[index] = src[index];
        index++;
    }
    result[index] = '\0';
    return (result);
}
