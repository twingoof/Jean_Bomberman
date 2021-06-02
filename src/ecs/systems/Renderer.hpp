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

#include "Entity.hpp"
#include "Drawable.hpp"

#include <map>
#include <string>
/**
 * @class Renderer Renderer.hpp "src/ecs/systems/Renderer.hpp"
 */
class Renderer {
    public:

        Renderer();
        ~Renderer();

        void draw(const std::map<std::string, Entity>& entities);
    private:
};

#endif //INDIE_RENDERER_HPP
