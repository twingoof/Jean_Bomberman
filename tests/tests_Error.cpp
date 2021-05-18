/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** tests_Error
*/

#include "OSRedirector.hpp"
#include "Error.hpp"

void throw_test()
{
    throw Error("Error: this is a test.");
}

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

Test(Error_throw, normal_usage)
{
    OSRedirector cerr(std::cerr);
    
    try {
        throw_test();
    } catch (const Error &e) {
        std::cerr << e.what() << std::endl;
    }
    cr_assert_eq(cerr.getContent(), "Error: this is a test message\n");
    cr_assert_throw(throw_test(), Error);
}