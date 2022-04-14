/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** manages display
*/

#include "sokoban.h"

void display_hud(map_t map)
{
    int i = 0;

    while (i != map.height) {
        mvprintw((LINES / 2) - map.size_middle + i, \
        (COLS / 2) - 4, map.map_tab[i]);
        i++;
    }
    refresh();
}
