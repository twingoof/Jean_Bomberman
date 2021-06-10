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

#include "Drawable2D.hpp"
#include "Drawable3D.hpp"
#include "enum.hpp"
#include "Entity.hpp"
#include "IComponent.hpp"

#include <map>
#include <memory>
#include <vector>
#include <string>

namespace ECS {
    /**
     * @class Renderer Renderer.hpp "src/ecs/systems/Renderer.hpp"
     */
    class Renderer {
        public:
    
            Renderer();
            ~Renderer();
    
            void draw(const std::vector<ECS::Entity> &entities);
        private:
            void _draw2D(const ECS::Vector3<float>& position, const ECS::Drawable2D& drawable);
            void _draw3D(const ECS::Vector3<float>& position, const ECS::Drawable3D& drawable);
    };

}
#endif //INDIE_RENDERER_HPP
