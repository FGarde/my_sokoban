/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** manages collisions of the game
*/

#include "sokoban.h"

bool detect_wall_left(map_t map, player_t player)
{
    while (COLL_LEFT) {
        return true;
    }
    return false;
}

bool detect_wall_right(map_t map, player_t player)
{
    while (COLL_RIGHT) {
        return true;
    }
    return false;
}

bool detect_wall_down(map_t map, player_t player)
{
    while (COLL_DOWN) {
        return true;
    }
    return false;
}

bool detect_wall_up(map_t map, player_t player)
{
    while (COLL_UP) {
        return true;
    }
    return false;
}
