/*
** EPITECH PROJECT, 2022
** my_get_nbr
** File description:
** num in string to digits
*/

#include "c_lib.h"

int	my_get_nbr(char *str)
{
    int num = 0;
    int if_neg = 1;
    int loop = 0;

    while (str[loop] == '+' || str[loop] == '-') {
        if (str[loop] == '-')
            if_neg = if_neg * -1;
        loop++;
    }
    while (str[loop] != '\0') {
        if (str[loop] >= '0' && str[loop] <= '9') {
            num = num * 10;
            num = num + str[loop] - '0';
            loop++;
        } else
            return (num * if_neg);
    }
    return (num * if_neg);
}
