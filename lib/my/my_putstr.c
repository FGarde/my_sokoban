/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Prints srt
*/

#include "my_lib.h"

int my_putstr(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putchar(str[x]);
        x += 1;
    }
    return (0);
}
