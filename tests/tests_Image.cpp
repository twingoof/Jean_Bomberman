/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** tests_Image
*/

#include "OSRedirector.hpp"
#include "Image.hpp"
#include <vector>

Test(Image_constructor, normal_usage)
{
    std::vector<int, int> expected = {0, 0};
    std::map<std::string, std::string> textureExpected = {};
    Image image({}, {0, 0}, {0, 0});

    cr_assert_eq(image.getPosition(), expected);
    cr_assert_eq(image.getSize(), expected);
    cr_assert_eq(image._imageTexture.getTextures(), textureExpected);
}

Test(Image_setFunctions, normal_usage)
{
    std::vector<int, int> expected = {20, 20};
    Image image({}, {0, 0}, {0, 0});

    image.setPosition({20, 20});
    image.setSize({20, 20});
    cr_assert_eq(image.getPosition(), expected);
    cr_assert_eq(image.getSize(), expected);
}