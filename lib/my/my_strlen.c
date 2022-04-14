/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** Gives the len of a str
*/

int my_strlen(char const *str)
{
    int len = 0;

    if (!str)
        return -1;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}
