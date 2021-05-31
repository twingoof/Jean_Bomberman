/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** tests_Scene
*/

#include "OSRedirector.hpp"
#include "Button.hpp"
#include "Scene.hpp"

Test(Scene_constructor, normal_usage)
{
    std::string expected = "Title";
    Scene test("Title");

    cr_assert_eq(test.getTitle(), expected);
}

Test(Scene_addEntity, normal_usage)
{
    Scene test("");
    Button button;

    test.addEntity(button);
    cr_assert_eq(test.getEntities().size(), 1);
}