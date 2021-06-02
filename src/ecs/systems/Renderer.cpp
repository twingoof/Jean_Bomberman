/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/

#include "Renderer.hpp"

void Renderer::draw(const std::map<std::string, Entity>& entities) {
    for (const auto& entity: entities) {
        auto& components = entity.second.getComponents();
        Drawable drawable = components.find("drawable");
    }
}
