/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** host_actions
*/

#include "lib.h"

int host_actions(struct timespec time, size_t len)
{
    my_putstr("attack: ");
    int rd = getline(&Battleship->char_str_pos, &len, stdin);
    if (rd == -1)
        return (84);
    check_if_attack_valid(len);
    send_bin(time);
    while (hit_miss_arrived(time) == 0) {}
    pos_to_num();
    change_enemy_host_map();
    my_putstr("waiting for enemy's attack...\n");
    Battleship->bin_str_pos = my_strdup("");
    while (attack_arrived(time) == false) {}
    bin_to_pos();
    my_putstr(Battleship->char_str_pos);
    Battleship->bin_str_pos = my_strdup("");
    pos_to_num();
    Battleship->char_str_pos = my_strdup("");
    check_hit_or_miss(time);
    Battleship->bin_str_pos = my_strdup("");
}
