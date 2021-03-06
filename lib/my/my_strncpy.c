/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** copies n char from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        i += 1;
        if (i == n) {
            dest[i] = '\0';
        }
    }
    return (dest);
}
