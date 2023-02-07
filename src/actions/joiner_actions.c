/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** joiner_actions
*/

#include "lib.h"

int joiner_actions(struct timespec time, size_t len)
{
    Battleship->bin_str_pos = my_strdup("");
    my_putstr("waiting for enemy's attack...\n");
    while (everything_recived(time) == false) {}
    bin_to_pos();
    pos_to_num();
    check_hit_or_miss(time);
    my_putstr("attack: ");
    Battleship->bin_str_pos = my_strdup("");
    int rd2 = getline(&Battleship->char_str_pos, &len, stdin);
    if (rd2 == -1)
        return (84);
    check_if_attack_valid(len);
    pos_to_num();
    send_bin(time);
    while (hit_miss_arrived(time) == 0) {}
    change_enemy_joiner_map();
}
