/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: kali-linux]
** File description:
** Renderer
*/

/**
 * @file Renderer.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Renderer system
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
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

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class Renderer Renderer.hpp "src/ecs/systems/Renderer.hpp"
     */
    class Renderer {
        public:
            /**
             * @fn 
             * @brief Construct a new Renderer object
             */
            Renderer();

            /**
             * @fn 
             * @brief Destroy the Renderer object
             */
            ~Renderer();

            /**
             * @fn 
             * @brief 
             * 
             * @param entities 
             */
            void draw(std::vector<ECS::Entity> &entities);
        private:
            /**
             * @fn void _draw2D(const ECS::Vector3<float>& position, ECS::Drawable2D& drawable)
             * @brief Draw2D entity
             * 
             * @param position Position of entity
             * @param drawable Drawable to draw
             */
            void _draw2D(const ECS::Vector3<float>& position, ECS::Drawable2D& drawable);

            /**
             * @fn void _draw3D(const ECS::Vector3<float>& position, ECS::Drawable3D& drawable)
             * @brief Draw3D entity
             * 
             * @param position Position of entity
             * @param drawable Drawable to draw
             */
            void _draw3D(const ECS::Vector3<float>& position, ECS::Drawable3D& drawable);


            /**
             * @fn void _loadTextureInCache(const ECS::Drawable2D& drawable)
             * @brief Load texture in cache
             * 
             * @param drawable Drawable to load
             */
            void _loadTextureInCache(const ECS::Drawable2D& drawable);

            /**
             * @fn void _loadTextureInCache(const ECS::Drawable3D& drawable)
             * @brief Load texture in cache
             * 
             * @param drawable Drawable to load
             */
            void _loadTextureInCache(const ECS::Drawable3D& drawable);

            /**
             * @fn void _loadModelInCache(const ECS::Drawable3D& drawable)
             * @brief Load model in cache
             * 
             * @param drawable Drawable to load
             */
            void _loadModelInCache(const ECS::Drawable3D& drawable);

            /**
             * @fn raylib::Texture _getTextureFromCache(const unsigned int id)
             * @brief Get texture from cache
             * 
             * @param id Id to get
             * @return raylib::Texture 
             */
            raylib::Texture _getTextureFromCache(const unsigned int id);

            /**
             * @fn raylib::Model _getModelFromCache(const unsigned int id)
             * @brief Get Model from cache
             * 
             * @param id Id to get
             * @return raylib::Model 
             */
            raylib::Model _getModelFromCache(const unsigned int id);

            std::map<unsigned int, raylib::Texture> _loadedTextures;
            std::map<unsigned int, raylib::Model> _loadedModels;

            /**
             * @fn bool _isTLoaded(unsigned int id)
             * @brief Check is the Texture is loaded
             * 
             * @param id Id to check
             * @return true 
             * @return false 
             */
            bool _isTLoaded(unsigned int id);

            /**
             * @fn bool _isMloaded(unsigned int id)
             * @brief Check if the model is loaded
             * 
             * @param id Id to check
             * @return true 
             * @return false 
             */
            bool _isMloaded(unsigned int id);
    };

}
#endif //INDIE_RENDERER_HPP
