/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** print_interactions
*/

#include "lib.h"

int print_interactions(void)
{
    print_maps();
    switch (print_actions()) {
        case 1: return (1);
        case 84: return (84);
    }
    return (0);
}
