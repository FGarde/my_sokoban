/*
** EPITECH PROJECT, 2022
** open_map
** File description:
** opens and write a map
*/

#include "my_lib.h"

char *open_map(char *filepath)
{
    int fd;
    char *buf = malloc(sizeof(char) * 500);
    int size;
    fd = open(filepath, O_RDONLY);

    if (fd == -1)
        return NULL;
    size = read(fd, buf, 500);
    close(fd);
    return buf;
}
