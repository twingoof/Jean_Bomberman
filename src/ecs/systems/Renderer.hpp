/*
** EPITECH PROJECT, 2021
** indie
** File description:
** TODO: add description
*/
/**
 * @file Renderer.hpp
 * @brief Renderer system for ECS
 */
#ifndef INDIE_RENDERER_HPP
#define INDIE_RENDERER_HPP

#include "Circle.hpp"
#include "Drawable2D.hpp"
#include "Drawable3D.hpp"
#include "enum.hpp"
#include "Entity.hpp"
#include "IComponent.hpp"
#include "Model.hpp"
#include "Texture.hpp"

#include <vector>
#include <string>
/**
 * @class Renderer Renderer.hpp "src/ecs/systems/Renderer.hpp"
 */
class Renderer {
    public:

        Renderer();
        ~Renderer();

        void draw(const std::vector<Entity>& entities);
    private:
        void _draw2D(const ECSVector3& position, const Drawable2D& drawable);
        void _draw3D(const ECSVector3& position, const Drawable3D& drawable);
};

#endif //INDIE_RENDERER_HPP
