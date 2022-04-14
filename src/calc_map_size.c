/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** calculates the size of the map
*/

#include "sokoban.h"

int calc_middle_array(char *map_str)
{
    int i = 0;
    int cpt = 0;

    while (map_str[i] != '\0') {
        if (map_str[i] == '\n') {
            cpt++;
            i++;
        }
        i++;
    }
    return (cpt / 2);
}

int calc_height(char *map_str)
{
    int i = 0;
    int cpt = 1;

    while (map_str[i] != '\0') {
        if (map_str[i] == '\n') {
            cpt++;
            i++;
        }
        i++;
    }
    return (cpt);
}

int calc_lenght(char *map_str)
{
    int i = 0;

    while (map_str[i] != '\n') {
        i++;
    }
    return (i);
}
