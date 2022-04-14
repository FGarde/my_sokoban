/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** manages all inputs in the game
*/

#include "sokoban.h"

int move_box(move_t *move, map_t map)
{
    int has_move = 0;

    switch (map.map_tab[move->y2 + (move->y2 - move->y1)][move->x2 + (move->x2 - move->x1)]) {
        case ' ':
            has_move = 1;
            map.map_tab[move->y2][move->x2] = ' ';
            map.map_tab[move->y2 + (move->y2 - move->y1)][move->x2 + (move->x2 - move->x1)] = 'X';
            break;
    }
    return has_move;
}

char **move_player(move_t *move, map_t map)
{
    switch (map.map_tab[move->y2][move->x2]) {
        case ' ':
            map.map_tab[move->y1][move->x1] = ' ';
            map.map_tab[move->y2][move->x2] = 'P';
            break;
        case 'X':
            if (move_box(move, map)) {
            map.map_tab[move->y1][move->x1] = ' ';
            map.map_tab[move->y2][move->x2] = 'P';
            }
            break;
    }
    return map.map_tab;
}

map_t manages_key_input(map_t map, player_t player)
{
    switch (player.cmd) {
        case ' ':
            break;
        case KEY_RIGHT:
            map.map_tab = move_player(&(move_t){player.pos_x, player.pos_y, player.pos_x + 1, player.pos_y}, map);
            break;
        case KEY_LEFT:
            map.map_tab = move_player_left(map, player);
            break;
        case KEY_UP:
            map.map_tab = move_player_up(map, player);
            break;
        case KEY_DOWN:
            map.map_tab = move_player_down(map, player);
            break;
    }
    return map;
}
