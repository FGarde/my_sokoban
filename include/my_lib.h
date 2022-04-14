/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** My personal lib
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#ifndef MY_LIB_H_
#define MY_LIB_H_

void print_char(char c, va_list list);
void print_nbr(int nb, va_list list);
void print_str(char *str, va_list list);
void print_error(char *str, va_list list);
void find_flag(char c, va_list list, ...);
void my_printf(char *s, ...);
int my_get_nbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_putstr_error(char const *str);
char *my_revstr(char *str);
char *my_strcat(char *dest, const char *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, char c);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char **malloc_tab(char *str, char c);
char **my_str_word_to_array(char *str, char c);

#endif
