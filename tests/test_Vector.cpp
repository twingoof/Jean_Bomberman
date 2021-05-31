/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** test_Vector
*/

#include "OSRedirector.hpp"
#include "Vector.hpp"
#include <vector>

Test(Vector_constructor, with_parameter)
{
    std::vector<int, int> expected = {0, 0};
    Vector test({0, 0});

    cr_assert_eq(test.getValue(), expected);
}

Test(Vector_constructor, no_parameter)
{
    std::vector<int, int> expected = {};
    Vector test;

    cr_assert_eq(test.getValue(), expected);
}

Test(Vector_setValue, normal_usage)
{
    std::vector<int, int> expected = {0, 0};
    Vector test;

    test.setValue({0, 0});
    cr_assert_eq(test.getValue(), expected);
}