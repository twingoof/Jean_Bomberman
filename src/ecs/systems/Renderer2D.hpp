/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/
/**
 * @file Renderer2D.hpp
 * @brief Renderer2D system for ECS
 */
#ifndef INDIE_RENDERER_HPP
#define INDIE_RENDERER_HPP

#include "AltEntity.hpp"
#include "Drawable2D.hpp"
#include "IComponent.hpp"
#include "Texture.hpp"

#include <vector>
#include <string>
/**
 * @class Renderer2D Renderer2D.hpp "src/ecs/systems/Renderer2D.hpp"
 */
class Renderer2D {
    public:

        Renderer2D();
        ~Renderer2D();

        void draw(const std::vector<AltEntity>& entities);
    private:
};

#endif //INDIE_RENDERER_HPP
