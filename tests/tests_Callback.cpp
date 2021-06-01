/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** tests_Callback
*/

#include "OSRedirector.hpp"
#include "Callback.hpp"
#include <iostream>

void test()
{
    std::cout << "test" << std::endl;
}

Test(Callback_constructor, with_constructor)
{
    Callback click(test);
    void (*expected)() = test;

    cr_assert_eq(click.getCallback(), expected);
}

Test(Callback_constructor, no_constructor)
{
    Callback click;

    cr_assert_eq(click.getCallback(), nullptr);
}

Test(Callback_setCallback, normal_usage)
{
    Callback click;
    click.setCallback(test);
    void (*expected)() = test;

    cr_assert_eq(click.getCallback(), expected);
}

Test(Callback_callback, normal_usage)
{
    OSRedirector cout(std::cout);
    Callback click(test);

    click.callback();
    cr_assert_eq(cout.getContent(), "test\n");
}