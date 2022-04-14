/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** sokoban
*/

#include <ncurses.h>
#include <stdbool.h>
#include "my_lib.h"
#include "macro.h"

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

typedef struct player_s
{
    int cmd;
    int pos_x;
    int pos_y;
    int mvt_up;
    int mvt_down;
    int mvt_left;
    int mvt_right;
} player_t;

typedef struct move_s {
    int x1;
    int y1;
    int x2;
    int y2;
} move_t;

typedef struct map_s
{
    player_t *player;
    char *map_str;
    char **map_tab;
    int width;
    int height;
    int size_middle;
    int slots;
} map_t;

// calc_map_size.c
int calc_middle_array(char *map_str);
int calc_height(char *map_str);
int calc_lenght(char *map_str);

// count_boxes.c

int box_counter(map_t map);

// main.c
map_t init_map(map_t map, char **av);
void init_game(map_t map, player_t player);

// manage_collisions_boxes.c

bool detect_box_up(map_t map, player_t player);
bool detect_box_down(map_t map, player_t player);
bool detect_box_left(map_t map, player_t player);
bool detect_box_right(map_t map, player_t player);

// manage_collisions_walls.c
bool detect_wall_up(map_t map, player_t player);
bool detect_wall_down(map_t map, player_t player);
bool detect_wall_left(map_t map, player_t player);
bool detect_wall_right(map_t map, player_t player);

// manage_displays.c
void display_hud(map_t map);

// manage_errors.c
bool manage_error(int ac);
int check_map(map_t map);

// manage_inputs.c
map_t manages_key_input(map_t map, player_t player);

// manage_movements_boxes.c

map_t move_box_up(map_t map, player_t player);
map_t move_box_down(map_t map, player_t player);
map_t move_box_left(map_t map, player_t player);
map_t move_box_right(map_t map, player_t player);

// manage_player.c
player_t get_player_position(map_t map, player_t player);
char **move_player_right(map_t map, player_t player);
char **move_player_left(map_t map, player_t player);
char **move_player_up(map_t map, player_t player);
char **move_player_down(map_t map, player_t player);

// manage_struct_map.c
char **map_str_to_array(map_t map);
char *open_map_str(map_t map, char *filepath);
char **reset_map(map_t map);

// lib
char *open_map(char *filepath);

#endif
