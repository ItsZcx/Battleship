/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** transfor int to string
*/

#include "c_lib.h"

char *my_get_str(int value)
{
    int count = 0;
    int temp = value;

    while (temp != 0) {
        count++;
        temp /= 10;
    }
    char *str = malloc((count + 1) * sizeof(char));
    int count_temp = count - 1;
    while (count_temp >= 0) {
        str[count_temp] = (value % 10) + '0';
        value /= 10;
        count_temp--;
    }
    str[count] = '\0';
    return (str);
}
