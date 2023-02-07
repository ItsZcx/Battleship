/*
** EPITECH PROJECT, 2023
** B-PSU-100-BAR-1-1-Battleship-joan-pau.merida-ruiz
** File description:
** decimal_to_binary
*/

#include "c_lib.h"

int binary_to_dec(int binary)
{
    int base = 1;
    int dec_num = 0;
    int remainder = 0;

    while (binary > 0) {
        remainder = binary % 10;
        dec_num += remainder * base;
        binary /= 10;
        base *= 2;
    }
    return (dec_num);
}
