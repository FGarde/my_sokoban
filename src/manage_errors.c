/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** manages errors
*/

#include "sokoban.h"

int check_map(map_t map)
{
    if (!map.map_str) {
        return 84;
    }
    for (int i = 0; map.map_str[i] != '\0'; i++) {
        if (CHAR_W && CHAR_P && CHAR_O && CHAR_X && CHAR_S && CHAR_n && CHAR_0)
            return 84;
    }
    return 0;
}

bool manage_error(int ac)
{
    if (ac != 2) {
        return false;
    }
    return true;
}
