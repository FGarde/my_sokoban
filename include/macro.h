/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** files of all macros
*/

#ifndef MACRO_H_
#define MACRO_H_

#define LENGTH      map.height + 2
#define WIDTH       map.width + 4
#define LEFT_DOWN   LINES / 2 - map.height / 2 - 1
#define RIGHT_DOWN  COLS / 2 - map.width / 2 - 3

#define COLL_UP     map.map_tab[player.pos_y - 1][player.pos_x] == '#'
#define COLL_DOWN   map.map_tab[player.pos_y + 1][player.pos_x] == '#'
#define COLL_LEFT   map.map_tab[player.pos_y][player.pos_x - 1] == '#'
#define COLL_RIGHT  map.map_tab[player.pos_y][player.pos_x + 1] == '#'

#define COLL_BOX_UP     map.map_tab[player.pos_y - 1][player.pos_x] == 'X'
#define COLL_BOX_DOWN   map.map_tab[player.pos_y + 1][player.pos_x] == 'X'
#define COLL_BOX_LEFT   map.map_tab[player.pos_y][player.pos_x - 1] == 'X'
#define COLL_BOX_RIGHT  map.map_tab[player.pos_y][player.pos_x + 1] == 'X'

#define NO_BOX_UP       map.map_tab[player.pos_y - 2][player.pos_x] != 'X'
#define NO_BOX_DOWN     map.map_tab[player.pos_y + 2][player.pos_x] != 'X'
#define NO_BOX_LEFT     map.map_tab[player.pos_y][player.pos_x - 2] != 'X'
#define NO_BOX_RIGHT    map.map_tab[player.pos_y][player.pos_x + 2] != 'X'

#define CHAR_W          map.map_str[i] != '#'
#define CHAR_P          map.map_str[i] != 'P'
#define CHAR_O          map.map_str[i] != 'O'
#define CHAR_X          map.map_str[i] != 'X'
#define CHAR_S          map.map_str[i] != ' '
#define CHAR_n          map.map_str[i] != '\n'
#define CHAR_0          map.map_str[i] != '\0'

#endif
