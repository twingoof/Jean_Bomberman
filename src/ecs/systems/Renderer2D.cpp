/*
** EPITECH PROJECT, 2021
** indie
** File description:
** ECS Renderer2D system
*/

#include "Renderer2D.hpp"
#include "IComponent.hpp"

void Renderer2D::draw(const std::map<std::string, Entity>& entities) {
    for (const auto& entity: entities) {
        auto& components = entity.second.getComponents();
//        IComponent drawable = components.find(drawable);

    }
}
