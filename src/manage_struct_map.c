/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** manages the map struct
*/

#include "sokoban.h"

char **map_str_to_array(map_t map)
{
    map.map_tab = my_str_word_to_array(map.map_str, '\n');

    return map.map_tab;
}

char *open_map_str(map_t map, char *filepath)
{
    map.map_str = open_map(filepath);

    return map.map_str;
}

char **reset_map(map_t map)
{
    map.map_tab = map_str_to_array(map);
    return map.map_tab;
}

map_t init_map( map_t map, char **av)
{
    map.map_str = open_map_str(map, av[1]);
    map.map_tab = map_str_to_array(map);
    map.size_middle = calc_middle_array(map.map_str);
    map.height = calc_height(map.map_str);
    map.width = calc_lenght(map.map_str);
    return map;
}
