/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** parsing_error_handling
*/

#include "lib.h"

int parsing_error_handling(void)
{
    int error = 4;

    for (int ñ = 0; Battleship->info[ñ] != NULL; ñ++)
        error--;
    if (error != 0) {
        my_putstr("Error!\nYou only have to give five ships!\n");
        return (84);
    }
    for (int i = 0; Battleship->info[i] != NULL; i++) {
        int num_ships = my_get_nbr(Battleship->info[i][0]);
        if (info_error_handling(&i) == 84) {
            my_putstr("Error!\nYou are not sending a valid file!\n");
            return (84);
        }
        if (num_ships < 2 || num_ships > 5) {
            my_putstr("Error!\nYou are not sending a valid ship length!\n");
            return (84);
        }
    }
    return (0);
}
