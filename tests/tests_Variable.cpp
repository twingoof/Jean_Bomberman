/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** tests_Variable
*/

#include "OSRedirector.hpp"
#include "Variable.hpp"

Test(Variable_constructor, with_parameter)
{
    Variable var(5);

    cr_assert_eq(var.getValue(), 5);
}

Test(Variable_constructor, no_parameter)
{
    Variable var;

    cr_assert_eq(var.getValue(), 0);
}

Test(Variable_add, normal_usage)
{
    Variable var;

    var.add(1);
    cr_assert_eq(var.getValue(), 1);
}

Test(Variable_sub, normal_usage)
{
    Variable var(1);

    var.sub(1);
    cr_assert_eq(var.getValue(), 0);
}

Test(Variable_setValue, normal_usage)
{
    Variable var(10);

    var.setValue(7);
    cr_assert_eq(var.getValue(), 7);
}