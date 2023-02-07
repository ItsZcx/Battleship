/*
** EPITECH PROJECT, 2023
** B-PSU-100-BAR-1-1-Battleship-joan-pau.merida-ruiz
** File description:
** transfor int to char
*/

#include "c_lib.h"

char my_get_char(int value)
{
    int count = 0;
    int temp = value;

    while (temp != 0) {
        count++;
        temp /= 10;
    }
    char str;
    int count_temp = count - 1;
    str = (value % 10) + '0';
    value /= 10;
    return (str);
}
