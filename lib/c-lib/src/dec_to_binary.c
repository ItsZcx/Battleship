/*
** EPITECH PROJECT, 2023
** B-PSU-100-BAR-1-1-Battleship-joan-pau.merida-ruiz
** File description:
** decimal_to_binary
*/

#include "c_lib.h"

int dec_to_binary(int dec_num)
{
    int binary = 0;
    int remainder = 0;
    int multiplier = 1;

    while (dec_num != 0) {
        remainder = dec_num % 2;
        dec_num = dec_num / 2;
        binary = binary + remainder * multiplier;
        multiplier = multiplier * 10;
    }
    return (binary);
}
