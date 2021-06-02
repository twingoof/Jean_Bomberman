/*
** EPITECH PROJECT, 2024
** indie
** File description:
** Created by prost,
*/

#include "Killable.hpp"

#include <criterion/criterion.h>

Test(Killable, constructor) {
    Killable killable(120);

    cr_assert_eq(killable.getLife(), 120);
}