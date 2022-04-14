/*
** EPITECH PROJECT, 2022
** disp_starg.c
** File description:
** displays all its arguments
*/

#include "my_lib.h"

char flags[] =
{
            'c',
            'd',
            's'
};

void (*fun_ptr[])() = {
    print_char,
    print_nbr,
    print_str
};

void find_flag(char c, va_list list, ...)
{
    int i = 0;

    while (c != flags[i]) {
        i += 1;
    }
    (*fun_ptr[i])();
}

void my_printf(char *s, ...)
{
    int i = 0;
    va_list list;
    va_start(list, s);

    while (s[i] != '\0') {
        if (s[i] == '%') {
            i++;
            find_flag(s[i], list, &flags);
        } else {
            my_putchar(s[i]);
        }
        i++;
    }
    va_end(list);
}
