/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** makes the box moving
*/

#include "sokoban.h"

map_t move_box_up(map_t map, player_t player)
{
    if (NO_BOX_LEFT) {
        map.map_tab[player.pos_y - 2][player.pos_x] = 'X';
        map.map_tab[player.pos_y - 1][player.pos_x] = 'P';
        map.map_tab[player.pos_y][player.pos_x] = ' ';
    }
    return map;
}

map_t move_box_down(map_t map, player_t player)
{
    if (NO_BOX_LEFT) {
        map.map_tab[player.pos_y + 2][player.pos_x] = 'X';
        map.map_tab[player.pos_y + 1][player.pos_x] = 'P';
        map.map_tab[player.pos_y][player.pos_x] = ' ';
    }
    return map;
}

map_t move_box_left(map_t map, player_t player)
{
    if (NO_BOX_LEFT) {
        map.map_tab[player.pos_y][player.pos_x - 2] = 'X';
        map.map_tab[player.pos_y ][player.pos_x - 1] = 'P';
        map.map_tab[player.pos_y][player.pos_x] = ' ';
    }
    return map;
}

map_t move_box_right(map_t map, player_t player)
{
    if (NO_BOX_RIGHT) {
        map.map_tab[player.pos_y][player.pos_x + 2] = 'X';
        map.map_tab[player.pos_y ][player.pos_x + 1] = 'P';
        map.map_tab[player.pos_y][player.pos_x] = ' ';
    }
    return map;
}
