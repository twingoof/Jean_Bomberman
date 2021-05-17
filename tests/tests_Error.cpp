/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** tests_Error
*/

#include "OSRedirector.hpp"
#include "Error.hpp"

Test(Error_constructor, normal_usage)
{
    std::string expected = "Error: this is a test message";
    Error e("Error: this is a test message");

    cr_assert_eq(e.getMessage(), expected);
}

Test(Error_what, normal_usage)
{
    const char *expected = "Error: this is a test message";
    Error e("Error: this is a test message");

    cr_assert_eq(strcmp(expected, e.what()), 0);
}