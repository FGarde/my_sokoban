/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** prints a char
*/

#include "my_lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
