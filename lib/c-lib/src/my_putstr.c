/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-myls-joan-pau.merida-ruiz
** File description:
** my_putstr
*/

#include "c_lib.h"

void my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
}
