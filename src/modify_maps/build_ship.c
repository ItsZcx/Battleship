/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** build_ship
*/

#include "lib.h"

void build_ship(int i)
{
    int x = 0;
    int x2 = 0;
    int y2 = 0;
    int y = get_y_positions(&y, &y2, i);
    int ship_pices = my_get_cnbr(Battleship->info[i][0][0]);
    int x_temp = get_x_positions(&x, &x2, i);

    for (int index = 0; index <= ship_pices; index++) {
        if (x_temp <= x2 && y == y2) {
            Battleship->user_map[y - 1][x_temp - 1] = my_get_char(ship_pices);
            x_temp++;
        }
        x_temp++;
    }
    for (int index2 = 0; index2 < ship_pices; index2++) {
        if (y <= y2) {
            Battleship->user_map[y - 1][x - 1] = my_get_char(ship_pices);
            y++;
        }
    }
}
