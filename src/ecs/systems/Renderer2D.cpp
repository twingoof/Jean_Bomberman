/*
** EPITECH PROJECT, 2021
** indie
** File description:
** ECS Renderer2D system
*/

#include "Renderer2D.hpp"

Renderer2D::Renderer2D() = default;

Renderer2D::~Renderer2D() = default;

void Renderer2D::draw(const std::vector<Entity> &entities) {
    for (const auto& entity: entities) {
        IComponent component;
        try {
            component = entity.getComponent(DRAWABLE2D);
        } catch (std::out_of_range &e) {
            std::cout<<e.what();
        }
        try {
            Drawable2D& drawable = dynamic_cast<Drawable2D&>(component);
            std::cout<<drawable.getSpritePath()<<std::endl;
        } catch (std::exception &e) {
            std::cerr<<e.what();
        }
    }
}
