/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-myls-joan-pau.merida-ruiz
** File description:
** prototypes
*/

#ifndef LIB_H_
    #define LIB_H_

    #include "c_lib.h"
    #include "struct.h"
    #include <stdio.h>
    #include <fcntl.h>
    #include <signal.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <time.h>
    #include <errno.h>

    #define SIGPID 11
    extern s_Battleship *Battleship;

    s_Battleship *init_structs(int ac);
    int help(int ac, char **av);
    bool attack_arrived(struct timespec time);
    void bin_to_pos(void);
    void build_ship(int i);
    void change_enemy_host_map(void);
    void change_enemy_joiner_map(void);
    char *change_lastchar(char *src);
    void char_cases(char *pos, struct timespec time);
    int check_for_win(struct timespec time);
    void check_hit_or_miss(struct timespec time);
    void clean_bin(char *bin);
    int conditions_hit_miss_arrived(struct timespec time, int ones, int zeros);
    void define_signals(void);
    void edit_user_map(void);
    bool everything_recived(struct timespec time);
    void first_cases(int i, int j);
    int general_error_handling(int ac, char **av);
    void generate_clean_map(void);
    void generate_maps(void);
    void generate_user_map(void);
    int get_x_positions(int *x, int *x2, int i);
    int get_y_positions(int *y, int *y2, int i);
    int hit_miss_arrived(struct timespec time);
    int host_actions(struct timespec time, size_t len);
    int host_error_handling(int ac, char **av);
    int info_error_handling(int *i);
    void int_cases(char *pos, struct timespec time);
    int joiner_actions(struct timespec time, size_t len);
    int joiner_error_handling(int ac, char **av);
    int parsing_error_handling(void);
    int parsing(int ac, char **av);
    void pos_0_num_0(void);
    void pos_1_num_1(void);
    void pos_to_num(void);
    void pos_to_signal(char *pos, struct timespec time);
    int print_actions(void);
    void print_maps(void);
    void print_start(void);
    char ***read_file(int ac, char **av);
    void second_cases(int i, int j);
    void send_bin(struct timespec time);
    void send_siguser2(int which_case, struct timespec time);
    void signal_handlers(int sigint, siginfo_t *info, void *context);
    void switch_char(int i, int j);
    void transform_first_char(int char_ones);
    void transform_second_char(int num_ones);
    void check_if_attack_valid(size_t len);
    int print_interactions(void);
    int amount_of_lines(int ac, char **av);

#endif
