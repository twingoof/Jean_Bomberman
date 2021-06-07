/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** TestClickable
*/

#include <criterion/criterion.h>
#include <iostream>
#include "Clickable.hpp"

void test()
{
    std::cout << "test" << std::endl;
}

void set()
{
    std::cout << "set" << std::endl;
}

Test(Clickable, constructor) {
    Clickable clickable(&test);

    cr_assert_eq(clickable.getCallback(), test);
}

Test(Clickable, setCallback) {
    Clickable clickable(&test);

    clickable.setCallback(&set);
    cr_assert_eq(clickable.getCallback(), set);
}