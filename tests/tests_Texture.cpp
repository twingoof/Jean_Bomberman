/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** tests_Texture
*/

#include "OSRedirector.hpp"
#include "Texture.hpp"
#include <map>

Test(Texture_constructor, with_parameter)
{
    std::map<std::string, std::string> expected = {{"", ""}};
    Texture test({"", ""});

    cr_assert_eq(test.getTextures(), expected);
}

Test(Texture_constructor, no_parameter)
{
    std::map<std::string, std::string> expected = {};
    Texture test;

    cr_assert_eq(test.getTextures(), expected);
}

Test(Texture_addTexture, normal_usage)
{
    std::map<std::string, std::string> expected = {{"I'm", "test"}};
    Texture test;

    test.addTexture({"I'm", "Test"});
    cr_assert_eq(test.getTextures(), expected);
}

Test(Texture_addTextures, normal_usage)
{
    std::map<std::string, std::string> expected = {{"I'm", "test"}, {"me", "too"}};
    Texture test;

    test.addTexture({{"I'm", "Test"}, {"me", "too"}});
    cr_assert_eq(test.getTextures(), expected);
}

Test(Texture_deleteTexture, normal_usage)
{
    std::map<std::string, std::string> expected = {{"I'm", "test"}};
    Texture test({{"I'm", "test"}, {"me", "too"}});

    test.deleteTexture("me");
    cr_assert_eq(test.getTextures(), expected);
}

Test(Texture_deleteTextures, normal_usage)
{
    std::map<std::string, std::string> expected = {};
    Texture test({{"I'm", "test"}, {"me", "too"}});

    test.deleteTextures({"I'm", "me"});
    cr_assert_eq(test.getTextures(), expected);
}

Test(Texture_getTexture, normal_usage)
{
    std::map<std::string, std::string> expected = {{"I'm", "test"}};
    Texture test({{"I'm", "test"}, {"me", "too"}});

    cr_assert_eq(test.getTexture("I'm"), expected);
}

Test(Texture_getTextures, with_parameter)
{
    std::map<std::string, std::string> expected = {{"I'm", "test"}, {"me", "too"}};
    Texture test({{"I'm", "test"}, {"me", "too"}});

    cr_assert_eq(test.getTextures({"I'm", "me"}), expected);
}

Test(Texture_getTexutres, no_parameters)
{
    std::map<std::string, std::string> expected = {{"I'm", "test"}, {"me", "too"}};
    Texture test({{"I'm", "test"}, {"me", "too"}});

    cr_assert_eq(test.getTextures(), expected);
}