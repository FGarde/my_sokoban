/*
** EPITECH PROJECT, 2021
** my_strlowcase
** File description:
** puts every letters in lowercase
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    int ascii = 0;

    while (str[i] != '\0') {
        ascii = str[i];
        if (ascii >= 65 && ascii <= 90) {
            str[i] = ascii + 32;
        }
        str[i] == ascii;
        i += 1;
    }
    return (str);
}
