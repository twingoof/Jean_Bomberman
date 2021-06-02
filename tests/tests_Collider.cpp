/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** tests_Collider
*/

#include "OSRedirector.hpp"
#include "Collider.hpp"
#include "Vector3.hpp"
#include "Vector.hpp"

Test(Collider_constructor, with_parameter)
{
    std::array<int, 3> expected = {1, 2, 3};
    Collider collide({1, 2, 3});

    cr_assert_eq(collide.getSize(), expected);
}