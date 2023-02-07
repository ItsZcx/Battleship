/*
** EPITECH PROJECT, 2023
** B-PSU-100-BAR-1-1-Battleship-joan-pau.merida-ruiz
** File description:
** my_cut_str
*/

#include "c_lib.h"

char *my_cut_str(char *str, int cut)
{
    int index = 0;
    char *result = malloc(sizeof(char) * my_strlen(str) + 1);

    while (index < cut) {
        result[index] = str[index];
        index++;
    }
    result[index] = '\0';
    char *temp = my_strdup(result);
    free (result);
    return (temp);
}
