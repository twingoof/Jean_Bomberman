/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** TestPhysics
*/

#include <criterion/criterion.h>
#include "Physics.hpp"
#include "ECSVector3.hpp"

Test(Physics, constructor) {
    ECSVector3 position();
    ECSVector3 testPosition();
    Physics physics(position, 2, 3);

    testPosition = physics.getPosition();
    cr_assert_eq(position, testPosition);
    cr_assert_eq(physics.getWidth(), 2);
    cr_assert_eq(physics.getHeight(), 3);
}

Test(Physics, setPos)
{
    ECSVector3 position();
    ECSVector3 position_scnd(1, 1, 1);
    ECSVector3 testPosition();
    Physics physics(position, 2, 3);

    physics.setPosition(position_scnd);
    testPosition = physics.getPosition();
    cr_assert_eq(position, testPosition);
}

Test(Physics, hasCollision)
{
    ECSVector3 position();
    ECSVector3 position_scnd(-1, -1);
    Physics physics(position, 2, 3);

    cr_assert_eq(physics.hasCollision(position_scnd, 2, 1), true);
}

Test(Physics, hasNotCollision)
{
    ECSVector3 position();
    ECSVector3 position_scnd(-1, -1);
    Physics physics(position, 2, 3);

    cr_assert_eq(physics.hasCollision(position_scnd, 1, 1), false);
}