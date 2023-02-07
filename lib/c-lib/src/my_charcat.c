/*
** EPITECH PROJECT, 2023
** B-PSU-100-BAR-1-1-Battleship-joan-pau.merida-ruiz
** File description:
** my_strcat
*/

#include "c_lib.h"

char *my_charcat(char *dest, char concatenate)
{
    int index = 0;
    int final_index = 0;
    char *final = malloc(sizeof(char) * (my_strlen(dest) + 2));

    while (dest[index] != '\0') {
        final[final_index] = dest[index];
        final_index++;
        index++;
    }
    index = 0;
    final[final_index] = concatenate;
    final_index++;
    final[final_index] = '\0';
    return (final);
}
