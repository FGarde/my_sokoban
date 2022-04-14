/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** reads how many boxes are left
*/

#include "sokoban.h"

int box_counter(map_t map)
{
    int i = 0;
    int cpt = 0;
    while (map.map_str[i] != '\0') {
        i++;
        if (map.map_str[i] == 'X') {
            cpt++;
            i++;
        }
    }
    return cpt;
}
