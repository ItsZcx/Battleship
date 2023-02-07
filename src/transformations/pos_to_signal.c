/*
** EPITECH PROJECT, 2023
** B-PSU-100-BAR-1-1-Battleship-joan-pau.merida-ruiz
** File description:
** str_to_signal
*/

#include "lib.h"

void pos_to_signal(char *pos, struct timespec time)
{
    char_cases(pos, time);
    int_cases(pos, time);
    Battleship->signal_sent = true;
}
