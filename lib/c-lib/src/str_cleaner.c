/*
** EPITECH PROJECT, 2023
** stumper_proto
** File description:
** clean a string of tabs and spaces
*/

#include "c_lib.h"

void fill_clean_str(char *dirty_str,char *clean_str, int *i, int *j)
{
    if (dirty_str[(*i)] != ' ' && dirty_str[(*i)] != '\t')
        clean_str[(*j)++] = dirty_str[(*i)];
    else if ((dirty_str[(*i)] == ' ' || dirty_str[(*i)] == '\t')
        && (dirty_str[(*i) + 1] != ' ' && dirty_str[(*i) + 1] != '\t')
        && dirty_str[(*i) + 1] != '\0')
        clean_str[(*j)++] = ' ';
}

char *str_cleaner(char *dirty_str)
{
    int i = 0;
    int j = 0;
    int len = my_strlen(dirty_str);
    char *clean_str = malloc(sizeof(char) * (len + 1));

    if (!clean_str)
        return (NULL);
    while (dirty_str[i] && (dirty_str[i] == ' ' || dirty_str[i] == '\t'))
        i++;
    while (dirty_str[i]) {
        fill_clean_str(dirty_str, clean_str, &i, &j);
        i++;
    }
    clean_str[j] = '\0';
    char *correct_malloc_clean_str = my_strdup(clean_str);
    free(clean_str);
    return (correct_malloc_clean_str);
}
