/*
** EPITECH PROJECT, 2023
** B-PSU-100-BAR-1-1-Battleship-joan-pau.merida-ruiz
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include <stdbool.h>

    typedef struct l_Battleship {
        int won;
        int lost;
        int hit;
        int print;
        bool turn;
        int pos_num[2];
        bool signal_sent;
        char *bin_str_pos;
        char *char_str_pos;
        char ***info;
        char **clean_map;
        char **user_map;
        char **enemy_map;
        int amount_of_ships;
        pid_t host_pid;
        pid_t joiner_pid;
    } s_Battleship;

#endif
