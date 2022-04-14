/*
** EPITECH PROJECT, 2022
** my_str_cat
** File description:
** concatenates two strings
*/

#include "my_lib.h"

char *my_strcat(char *dest, const char *src)
{
    int dest_len = my_strlen(dest);
    int i = 0;
    int x = my_strlen(src);

    while (i < x && src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}
