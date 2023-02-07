/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-myls-joan-pau.merida-ruiz
** File description:
** init_structs
*/

#include "lib.h"

s_Battleship *init_structs(int ac)
{
    s_Battleship *Battleship = malloc(sizeof(s_Battleship));

    if (ac == 2)
        Battleship->turn = true;
    else if (ac == 3)
        Battleship->turn = false;
    Battleship->amount_of_ships = 0;
    Battleship->print = 0;
    Battleship->won = 14;
    Battleship->lost = 14;
    Battleship->pos_num[0] = 0;
    Battleship->pos_num[1] = 0;
    Battleship->signal_sent = false;
    Battleship->bin_str_pos = malloc(sizeof(char) * 17);
    Battleship->char_str_pos = malloc(sizeof(char) * 3);
    return (Battleship);
}
