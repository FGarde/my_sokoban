/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** detects collisions within the player and the box
*/

#include "sokoban.h"

bool detect_box_up(map_t map, player_t player)
{
    while (COLL_BOX_UP) {
        return true;
    }
    return false;
}

bool detect_box_down(map_t map, player_t player)
{
    while (COLL_BOX_DOWN) {
        return true;
    }
    return false;
}

bool detect_box_left(map_t map, player_t player)
{
    while (COLL_BOX_LEFT) {
        return true;
    }
    return false;
}

bool detect_box_right(map_t map, player_t player)
{
    while (COLL_BOX_RIGHT) {
        return true;
    }
    return false;
}
