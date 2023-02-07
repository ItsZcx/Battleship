/*
** EPITECH PROJECT, 2023
** B-PSU-100-BAR-1-1-Battleship-joan-pau.merida-ruiz
** File description:
** my_Battleship
*/

#include "lib.h"

s_Battleship *Battleship = NULL;

int my_Battleship(int ac, char **av)
{
    if (parsing(ac, av) == 84)
        return (84);
    generate_maps();
    define_signals();
    print_start();
    while (1) {
        switch (print_interactions()) {
            case 1: return (0);
            case 84: return (84);
        }
    }
    return (0);
}

int main(int ac, char **av)
{
    Battleship = init_structs(ac);

    if (help(ac, av) == 1)
        return (0);
    if (general_error_handling(ac, av) == 84)
        return (84);
    if (my_Battleship(ac, av) == 84)
        return (84);
    return (0);
}
