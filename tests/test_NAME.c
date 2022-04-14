/*
** EPITECH PROJECT, 2022
** test FazzBizz
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include "my_lib.h"

Test(basics, try_if_it_find_nbr) {
    int nbr = my_get_nbr("Epitech 42");
        cr_assert(nbr == 42);
}
