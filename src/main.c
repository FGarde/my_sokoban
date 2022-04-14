/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** main file of Sokoban
*/

#include "sokoban.h"

void init_game(map_t map, player_t player)
{
    initscr();
    keypad(stdscr, TRUE);
    curs_set(0);
    player.cmd = 0;
    while (player.cmd != 'q') {
        display_hud(map);
        player.cmd = getch();
        clear();
        player = get_player_position(map, player);
        manages_key_input(map, player);
        refresh();
    }
    endwin();
}

int main(int argc, char **argv)
{
    map_t *map = malloc(sizeof(map_t));
    player_t *player = malloc(sizeof(player_t));

    if (!manage_error(argc)) {
        return 84;
    }
    *map = init_map(*map, argv);
    if (check_map(*map) == 84)
        return 84;
    init_game(*map, *player);
    return 0;
}
