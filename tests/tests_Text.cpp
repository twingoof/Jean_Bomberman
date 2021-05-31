/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** tests_Text
*/

#include "OSRedirector.hpp"
#include "Text.hpp"

Test(Text_getText, normal_usage)
{
    Text test("I'm a test");
    std::string expected = "I'm a test";

    cr_assert_eq(test.getText(), expected);
}

Test(Text_setText, normal_usage)
{
    Text test("I'm a test");
    std::string expected = "I'm another test";

    test.setText("I'm another test");
    cr_assert_eq(test.getText(), expected);
}