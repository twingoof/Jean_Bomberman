/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Collider
*/

/**
 * @file Collider.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Collider system
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef COLLIDER_HPP_
#define COLLIDER_HPP_

#include "Collectible.hpp"
#include "Transform.hpp"
#include "Collision.hpp"
#include "Moveable.hpp"
#include "Entity.hpp"
#include "Window.hpp"
#include "Entity.hpp"
#include <algorithm>
#include <vector>

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class Collider Collider.hpp "src/ecs/systems/Collider.hpp"
     */
    class Collider {
        public:
            /**
             * @fn 
             * @brief Construct a new Collider object
             */
            Collider() = default;

            /**
             * @fn 
             * @brief Destroy the Collider object
             */
            ~Collider() = default;

            /**
             * @fn void checkCollision(std::vector<ECS::Entity> &scene)
             * @brief Check one by one all the entity collision
             * 
             * @param scene Entity of the game
             */
            void checkCollision(std::vector<ECS::Entity> &scene);

        private:
            /**
             * @fn void isWindowColliding(ECS::Entity &entity)
             * @brief Check is the entity is colliding with the window
             * 
             * @param entity Entity to check
             */
            void isWindowColliding(ECS::Entity &entity);

            /**
             * @fn int isEntitesColliding(ECS::Entity &fEntity, ECS::Entity &sEntity)
             * @brief Check if two entities are colliding
             * 
             * @param fEntity First entity
             * @param sEntity Second entity
             * @return int 
             */
            int isEntitesColliding(ECS::Entity &fEntity, ECS::Entity &sEntity);

    };
};

#endif /* !COLLIDER_HPP_ */
