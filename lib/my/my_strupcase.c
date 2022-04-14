/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** puts every letter in uppercase
*/

char *my_strupcase(char *str)
{
    int i = 0;
    int ascii = 0;

    while (str[i] != '\0') {
        ascii = str[i];
        if (ascii >= 97 && ascii <= 122) {
            str[i] = ascii - 32;
        }
        str[i] == ascii;
        i += 1;
    }
    return (str);
}
