/*
** EPITECH PROJECT, 2021
** indie
** File description:
** ECS Renderer2D system
*/

#include "Renderer2D.hpp"
#include "IComponent.hpp"
#include "Texture.hpp"

#include <iostream>

Renderer2D::Renderer2D() = default;

Renderer2D::~Renderer2D() = default;

void Renderer2D::draw(const std::vector<Entity> &entities) {
    for (const auto& entity: entities) {
        IComponent component;
        try {
            component = entity.getComponent(DRAWABLE2D);
        } catch (std::out_of_range &e) {
            continue;
        }
        try {
            auto drawable2D = dynamic_cast<Drawable2D &>(component);
            std::cout<<drawable2D.getSpritePath()<<std::endl;
        } catch (std::exception &e) {
            std::cerr<<e.what()<<std::endl;
        }

    }
}
