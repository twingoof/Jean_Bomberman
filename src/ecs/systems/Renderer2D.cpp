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
    for (auto entity : entities) {
        try {
            Drawable2D d = entity.getComponent<Drawable2D>(DRAWABLE2D);
        } catch (std::out_of_range &e) {
            std::cerr<<" This entity is not drawable"<<std::endl;
        }

        
    }
}
