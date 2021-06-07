/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** tests_Physics
*/

#include "OSRedirector.hpp"
#include "ECSVector3.hpp"
#include "Physics.hpp"

Test(Physics_constructor, normal_usage)
{
    ECSVector3 size(1, 2, 3);
    ECSVector3 position(1, 2, 3);
    Physics physics(size, position);

    cr_assert_eq(physics.getSize().getX(), 1);
    cr_assert_eq(physics.getSize().getY(), 2);
    cr_assert_eq(physics.getSize().getZ(), 3);
    cr_assert_eq(physics.getPosition().getX(), 1);
    cr_assert_eq(physics.getPosition().getY(), 2);
    cr_assert_eq(physics.getPosition().getZ(), 3);
    cr_assert_eq(physics.getLayer(), 0);
}

Test(Physics_setLayer, normal_usage)
{
    ECSVector3 size(1, 2, 3);
    ECSVector3 position(1, 2, 3);
    Physics physics(size, position);

    physics.setLayer(2);
    cr_assert_eq(physics.getLayer(), 2);
}

Test(Physics_setSize, normal_usage)
{
    ECSVector3 size(1, 2, 3);
    ECSVector3 newSize(4, 5, 6);
    ECSVector3 position(1, 2, 3);
    Physics physics(size, position);

    physics.setSize(newSize);
    cr_assert_eq(physics.getSize().getX(), 4);
    cr_assert_eq(physics.getSize().getY(), 5);
    cr_assert_eq(physics.getSize().getZ(), 6);
}

Test(Physics_setPosition, normal_usage)
{
    ECSVector3 size(1, 2, 3);
    ECSVector3 position(1, 2, 3);
    ECSVector3 newPosition(4, 5, 6);
    Physics physics(size, position);

    physics.setPosition(newPosition);
    cr_assert_eq(physics.getPosition().getX(), 4);
    cr_assert_eq(physics.getPosition().getY(), 5);
    cr_assert_eq(physics.getPosition().getZ(), 6);
}