/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** reverses a string
*/

#include "my_lib.h"

char *my_revstr(char *str)
{
    int max = my_strlen(str)-1;
    int min = 0;
    char temp;

    while (min < max) {
        temp = str[min];
        str[min] = str[max];
        str[max] = temp;
        min += 1;
        max -= 1;
    }
    return (str);
}
