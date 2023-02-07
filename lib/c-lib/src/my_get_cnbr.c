/*
** EPITECH PROJECT, 2023
** B-PSU-100-BAR-1-1-Battleship-joan-pau.merida-ruiz
** File description:
** my_get_cnbr
*/

#include "c_lib.h"

int	my_get_cnbr(char a)
{
    int num = 0;

    if (a >= '0' && a <= '9') {
        num = num * 10;
        num = num + a - '0';
    }
    return (num);
}
