/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** tests_Entity
*/

#include <criterion/criterion.h>
#include "Entity.hpp"
#include "IEntity.hpp"
#include "IComponent.hpp"
#include "Text.hpp"

Test(Entity_constructor, normal_usage)
{
    std::string expected = "name";

    Entity test("name");
    cr_assert_eq(test.getName(), expected);
}

Test(Entity_addComponent, normal_usage)
{
    Entity test("name");
    Text text;

    cr_assert_eq(test.getComponents().size(), 0);
    test.addComponent({"_text", text});
    cr_assert_eq(test.getComponents().size(), 1);
}

Test(Entity_addComponents, normal_usage)
{
    Entity test("name");
    Text text;
    Text text2;

    cr_assert_eq(test.getComponents().size(), 0);
    test.addComponents({{"_text", text}, {"_text2", text2}});
    cr_assert_eq(test.getComponents().size(), 2);
}

Test(Entity_deleteComponent, normal_usage)
{
    Entity test("name");
    Text text;
    Text text2;

    test.addComponents({{"_text", text}, {"_text2", text2}});
    cr_assert_eq(test.getComponents().size(), 2);
    test.deleteComponent("_text");
    cr_assert_eq(test.getComponents().size(), 1);
}

Test(Entity_deleteComponents, normal_usage)
{
    Entity test("name");
    Text text;
    Text text2;

    test.addComponents({{"_text", text}, {"_text2", text2}});
    cr_assert_eq(test.getComponents().size(), 2);
    test.deleteComponents({"_text", "_text2"});
    cr_assert_eq(test.getComponents().size(), 0);
}

Test(Entity_getComponent, normal_usage)
{
    Entity test("name");
    Text text;
    Text text2;
    std::map<std::string, IComponent> expected = {};

    test.addComponents({{"_text", text}, {"_text2", text2}});
    cr_assert_eq(expected.size(), 0);
    expected = test.getComponent("_text");
    cr_assert_eq(expected.size(), 1);
}

Test(Entity_getComponents, with_parameter)
{
    Entity test("name");
    Text text;
    Text text2;
    std::map<std::string, IComponent> expected = {};

    test.addComponents({{"_text", text}, {"_text2", text2}});
    cr_assert_eq(expected.size(), 0);
    expected = test.getComponents({"_text", "_text2"});
    cr_assert_eq(expected.size(), 2);
}

Test(Entiyt_getComponents, without_parameter)
{
    Entity test("name");
    Text text;
    Text text2;
    std::map<std::string, IComponent> expected = {};

    test.addComponents({{"_text", text}, {"_text2", text2}});
    cr_assert_eq(expected.size(), 0);
    expected = test.getComponents();
    cr_assert_eq(expected.size(), 2);
}