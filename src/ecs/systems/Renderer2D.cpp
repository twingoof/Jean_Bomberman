/*
** EPITECH PROJECT, 2021
** indie
** File description:
** ECS Renderer2D system
*/

#include "raylib.h"
#include "Renderer2D.hpp"

Renderer2D::Renderer2D() = default;

Renderer2D::~Renderer2D() = default;

void Renderer2D::draw(std::vector<Entity> entities) {
    for (const auto &entity : entities) {
        Drawable2D d;

        try {
            d = entity.getComponent<Drawable2D>(DRAWABLE2D);
        } catch (std::out_of_range &e) {
            std::cerr<<" This entity is not drawable"<<std::endl;
        }

        switch (d.getType())
        {
        case DrawableType::CIRCLE:
            DrawCircle(entity.getPosition()._x, entity.getPosition()._y, static_cast<float>(d.getSize()._x), RED);
            break;
        
        default:
            break;
        }
    }
}
