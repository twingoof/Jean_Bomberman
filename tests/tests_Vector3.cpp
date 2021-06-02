/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** tests_Vector3
*/

#include "OSRedirector.hpp"
#include "Vector3.hpp"
#include <array>

Test(Vector3_constructor, with_parameter)
{
    std::array<int, 3> expected = {1, 2, 3};
    Vector3 vector({1, 2, 3});

    cr_assert_eq(vector.getValue(), expected);
}

Test(Vector3_constructor, without_parameter)
{
    std::array<int, 3> expected = {};
    Vector3 vector;

    cr_assert_eq(vector.getValue(), expected);
}

Test(Vector3_setValue, normal_usage)
{
    std::array<int, 3> expected = {4, 5, 6};
    Vector3 vector({1, 2, 3});

    vector.setValue({4, 5, 6});
    cr_assert_eq(vector.getValue(), expected);
}