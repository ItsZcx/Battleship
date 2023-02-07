/*
** EPITECH PROJECT, 2023
** B-PSU-100-BAR-1-1-Battleship-joan-pau.merida-ruiz
** File description:
** my_strcat
*/

#include "c_lib.h"

char *my_strcat(char *dest, char *concatenate)
{
    int index = 0;
    int final_index = 0;
    char *final = malloc(sizeof(char) * (my_strlen(dest)
        + my_strlen(concatenate) + 1));

    while (dest[index] != '\0') {
        final[final_index] = dest[index];
        final_index++;
        index++;
    }
    index = 0;
    while (concatenate[index] != '\0') {
        final[final_index] = concatenate[index];
        final_index++;
        index++;
    }
    final[final_index] = '\0';
    return (final);
}
