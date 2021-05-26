/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** tests_Callback
*/

#include "OSRedirector.hpp"
#include "Clickable.hpp"
#include <iostream>

void test()
{
    std::cout << "test" << std::endl;
}

Test(Clickable_constructor, with_constructor)
{
    Clickable click(test);
    void (*expected)() = test;

    cr_assert_eq(click.getCallback(), expected);
}

Test(Clickable_constructor, no_constructor)
{
    Clickable click;

    cr_assert_eq(click.getCallback(), nullptr);
}

Test(Clickable_setCallback, normal_usage)
{
    Clickable click;
    click.setCallback(test);
    void (*expected)() = test;

    cr_assert_eq(click.getCallback(), expected);
}

Test(Clickable_callback, normal_usage)
{
    OSRedirector cout(std::cout);
    Clickable click(test);

    click.callback();
    cr_assert_eq(cout.getContent(), "test\n");
}