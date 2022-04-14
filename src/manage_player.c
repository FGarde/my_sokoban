/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** manages the player P
*/

#include "sokoban.h"

player_t get_player_position(map_t map, player_t player)
{
    for (int i = 0; map.map_tab[i]; i++) {
        for (int j = 0; map.map_tab[i][j] != '\0'; j++) {
            player.pos_x = (map.map_tab[i][j] == 'P') ? j : player.pos_x;
            player.pos_y = (map.map_tab[i][j] == 'P') ? i : player.pos_y;
        }
    }
    return player;
}

char **move_player_right(map_t map, player_t player)
{
    if (detect_wall_right(map, player) == false) {
        if (detect_box_right(map, player) == false) {
            map.map_tab[player.pos_y][player.pos_x + 1] = 'P';
            map.map_tab[player.pos_y][player.pos_x] = ' ';
        } else {
            move_box_right(map, player);
        }
    }
    return map.map_tab;
}

char **move_player_left(map_t map, player_t player)
{
    if (detect_wall_left(map, player) == false) {
        if (detect_box_left(map, player) == false) {
            map.map_tab[player.pos_y ][player.pos_x - 1] = 'P';
            map.map_tab[player.pos_y][player.pos_x] = ' ';
        } else {
            move_box_left(map, player);
        }
    }
    return map.map_tab;
}

char **move_player_up(map_t map, player_t player)
{
    if (detect_wall_up(map, player) == false) {
        if (detect_box_up(map, player) == false) {
            map.map_tab[player.pos_y - 1][player.pos_x] = 'P';
            map.map_tab[player.pos_y][player.pos_x] = ' ';
        } else {
            move_box_up(map, player);
        }
    }
    return map.map_tab;
}

char **move_player_down(map_t map, player_t player)
{
    if (detect_wall_down(map, player) == false) {
        if (detect_box_down(map, player) == false) {
            map.map_tab[player.pos_y + 1][player.pos_x] = 'P';
            map.map_tab[player.pos_y][player.pos_x] = ' ';
        } else {
            move_box_down(map, player);
        }
    }
    return map.map_tab;
}
