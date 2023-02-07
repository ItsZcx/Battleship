/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-myls-joan-pau.merida-ruiz
** File description:
** prototypes
*/

#ifndef C_LIB_H
    #define C_LIB_H

    #include <stdlib.h>

    void my_putchar(char c);
    void my_putchar_err(char c);
    void my_putstr(char const *str);
    void my_putstr_err(char const *str);
    int my_put_nbr(int x);
    int my_strlen(char *str);
    int	my_get_nbr(char *str);
    int binary_to_dec(int binary);
    int dec_to_binary(int dec_num);
    int my_strcmp(char *str_1, char *str_2);
    float my_get_float(char *str);
    char *my_strdup(char *src);
    char *my_get_str(int value);
    char *str_cleaner(char *dirty_str);
    char **my_str_to_word_array(char *str, char separator);
    char *my_strcat(char *dest, char *concatenate);
    char *my_charcat(char *dest, char concatenate);
    int	my_get_cnbr(char a);
    char *my_cut_str(char *str, int cut);
    char my_get_char(int value);

#endif
