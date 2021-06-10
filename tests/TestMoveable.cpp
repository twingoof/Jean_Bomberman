/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** TestMoveable
*/

#include <criterion/criterion.h>
#include "Moveable.hpp"
#include "ECSVector.hpp"

Test(Moveable, constructorInts) {
    Moveable moveable(1, 2, 3);
    ECSVector position();

    position = moveable.getPosition();
    cr_assert_eq(position.getX(), 1);
    cr_assert_eq(position.getY(), 2);
    cr_assert_eq(position.getZ(), 3);
}

Test(Moveable, constructorPosition) {
    ECSVector position();
    Moveable moveable(1, 2, 3);

    position = moveable.getPosition();
    cr_assert_eq(position.getX(), 1);
    cr_assert_eq(position.getY(), 2);
    cr_assert_eq(position.getZ(), 3);
}

Test(Moveable, moveX) {
    Moveable moveable(1, 2, 3);
    ECSVector position();

    moveable.moveX();
    cr_assert_eq(moveable.getX(), 3);
}

Test(Moveable, moveY) {
    Moveable moveable(1, 2, 3);

    moveable.moveY();
    cr_assert_eq(moveable.getY(), 3);
}

Test(Moveable, moveZ) {
    Moveable moveable(1, 2, 3);

    moveable.moveZ(2);
    cr_assert_eq(moveable.getZ(), 2);
}

Test(Moveable, moveInt) {
    Moveable moveable(1, 2, 3);

    moveable.move(2, 3, 4);
    cr_assert_eq(moveable.getX(), 2);
    cr_assert_eq(moveable.getY(), 3);
    cr_assert_eq(moveable.getZ(), 4);
}

Test(Moveable, movePos) {
    Moveable moveable(1, 2, 3);
    ECSVector vector3(2, 3, 4);

    moveable.move(vector3);
    cr_assert_eq(moveable.getX(), 2);
    cr_assert_eq(moveable.getY(), 3);
    cr_assert_eq(moveable.getZ(), 4);
}