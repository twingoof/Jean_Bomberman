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
#include "Texture.hpp"
#include "Model.hpp"

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
            void _draw2D(const ECS::Vector3<float>& position, ECS::Drawable2D& drawable);
            void _draw3D(const ECS::Vector3<float>& position, ECS::Drawable3D& drawable);

            void _loadTextureInCache(const ECS::Drawable2D& drawable);
            void _loadTextureInCache(const ECS::Drawable3D& drawable);
            void _loadModelInCache(const ECS::Drawable3D& drawable);

            raylib::Texture _getTextureFromCache(const unsigned int id);
            raylib::Model _getModelFromCache(const unsigned int id);

            std::map<unsigned int, raylib::Texture> _loadedTextures;
            std::map<unsigned int, raylib::Model> _loadedModels;

            bool _isTLoaded(unsigned int id);
            bool _isMloaded(unsigned int id);
    };

}
#endif //INDIE_RENDERER_HPP
