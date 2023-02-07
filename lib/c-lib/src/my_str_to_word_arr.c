/*
** EPITECH PROJECT, 2022
** B-CPE-110-BAR-1-1-BSQ-joan-pau.merida-ruiz
** File description:
** my_str_to_word_arr
*/
//hacer free en la funcion final del otro programa
//en num_of_words la string tiene que entrar teniendo "\0" o tendras valgrind

#include "c_lib.h"

char *word_finder(char *src, char separator, int l_count, int pos)
{
    char *dest = malloc(sizeof(char) * (l_count + 2));
    int i = 0;

    while (src[pos] != separator && src[pos]) {
        dest[i] = src[pos];
        pos++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int letter_counter(char *str, char separator, int i)
{
    int l_count = 0;

    while (str[i] != separator && str[i]) {
        l_count++;
        i++;
    }
    return (l_count);
}

int num_of_words(char *str, char separator, int *words_count)
{
    int i = 0;

    while (str && str[i] && str[i] != '\0') {
        if (str[i] == separator) {
            (*words_count)++;
        }
        i++;
    }
    return (*words_count);
}

char **my_str_to_word_array(char *str, char separator)
{
    int i = 0;
    int l_count = 0;
    int arr_pos = 0;
    int words_count = 1;

    str = str_cleaner(str);
    num_of_words(str, separator, &words_count);
    char **arr = malloc(sizeof(char *) * (words_count + 1));
    while (str[i]) {
        if (arr_pos < words_count) {
            l_count = letter_counter(str, separator, i);
            arr[arr_pos] = word_finder(str, separator, l_count, i);
            arr_pos++;
            i += l_count;
        }
        if (str[i])
            i++;
    }
    arr[words_count] = NULL;
    return (arr);
}
