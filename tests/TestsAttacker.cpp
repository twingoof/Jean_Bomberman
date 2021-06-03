/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** TestsAttacker
*/

#include <criterion/criterion.h>
#include "Attacker.hpp"

Test(Attacker, constructor) {
    Attacker attacker(3, 100);

    cr_assert_eq(attacker.getAmmo(), 3);
    cr_assert_eq(attacker.getDamage(), 100);
    cr_assert_eq(attacker.getBaseDamage(), 100);
}

Test(Attacker, setAmmo) {
    Attacker attacker(3, 100);

    attacker.setAmmo(5);
    cr_assert_eq(attacker.getAmmo(), 5);
}

Test(Attacker, setDamage) {
    Attacker attacker(3, 100);

    attacker.setDamage(65);
    cr_assert_eq(attacker.getDamage(), 65);
}

Test(Attacker, resetDamage) {
    Attacker attacker(3, 100);

    attacker.setDamage(65);
    attacker.resetDamage();
    cr_assert_eq(attacker.getDamage(), 100);
}

Test(Attacker, dealDamage) {
    Attacker attacker(3, 100);
    Killable defender(120);

    attacker.dealDamage(defender);
    cr_assert_eq(attacker.getAmmo(), 2);
    cr_assert_eq(defender.getLife(), 20);
}