/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** Prints srt
*/

#include "my_lib.h"

int my_putstr_error(char const *str)
{
    write(2, str, my_strlen(str));
    return 0;
}
