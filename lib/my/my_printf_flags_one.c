/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** first file of functions
*/

#include "my_lib.h"

void print_char(char c, va_list list)
{
    my_putchar(va_arg(list, int));
}

void print_nbr(int nb, va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void print_str(char *str, va_list list)
{
    my_putstr(va_arg(list, char *));
}
