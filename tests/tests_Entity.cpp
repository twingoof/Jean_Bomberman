/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** tests_Entity
*/

#include "OSRedirector.hpp"
#include "Entity.hpp"
#include "IEntity.hpp"
#include "IComponent.hpp"
#include "Callback.hpp"
#include "Text.hpp"
#include "Texture.hpp"
#include "Vector.hpp"

Test(Entity_constructor, normal_usage)
{
    std::string expected = "name";

    Entity test("name");
    cr_assert_eq(test.getName(), expected);
}

Test(Entity_addComponent, normal_usage)
{
    Entity test("name");
    Texture textureTest;

    test.addComponent({"texture", textureTest});
    for (const auto&wtf:test.getComponents()) {
        std::cout << "First: " << wtf.first << std::endl;
    }
    cr_assert_eq(test.getComponents().size(), 1);
}

