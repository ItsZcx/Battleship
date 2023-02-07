/*
** EPITECH PROJECT, 2023
** public_github
** File description:
** check_if_attack_valid
*/

#include "lib.h"

void check_if_attack_valid(size_t len)
{
    bool is_valid = true;

    pos_to_num();
    if (my_strlen(Battleship->char_str_pos) != 3 || Battleship->char_str_pos[0] < 65
        || Battleship->char_str_pos[0] > 72 || Battleship->char_str_pos[1] < 49
        || Battleship->char_str_pos[1] > 56
        || Battleship->enemy_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] == 'o'
        || Battleship->enemy_map[Battleship->pos_num[1] - 1][Battleship->pos_num[0]] == 'x') {
        my_putstr("wrong position\n");
        is_valid = false;
    }
    if (is_valid == false) {
        Battleship->char_str_pos = my_strdup("");
        my_putstr("attack: ");
        getline(&Battleship->char_str_pos, &len, stdin);
    }
    if (is_valid == false)
        check_if_attack_valid(len);
}
