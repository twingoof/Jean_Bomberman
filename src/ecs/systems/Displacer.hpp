/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Displacer
*/

/**
 * @file Displacer.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Displacer system
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef DISPLACER_HPP_
#define DISPLACER_HPP_

#include "enum.hpp"
#include "Entity.hpp"
#include "Moveable.hpp"
#include "Texture.hpp"

#include <vector>
#include <string>

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class Displacer Displacer.hpp "src/ecs/systems/Displacer.hpp"
    */
    class Displacer {
        public:
            /**
             * @fn Displacer() = default
             * @brief Construct a new Displacer object
             */
            Displacer() = default;

            /**
             * @fn Displacer(const Displacer &oldDisplacer) = default
             * @brief Construct a new Displacer object
             * 
             * @param oldDisplacer Old displacer to copy
             */
            Displacer(const Displacer &oldDisplacer) = default;

            /**
             * @fn Displacer &operator=(const Displacer &oldDisplacer) = default
             * @brief 
             * 
             * @param oldDisplacer Old displacer to copy
             * @return Displacer& 
             */
            Displacer &operator=(const Displacer &oldDisplacer) = default;

            /**
             * @fn ~Displacer() = default
             * @brief Destroy the Displacer object
             */
            ~Displacer() = default;


            /**
             * @fn void moveEntity(std::vector<ECS::Entity> &entities)
             * @brief Move player
             * 
             * @param entities All the entities on the map
             */
            void moveEntity(std::vector<ECS::Entity> &entities);


            /**
             * @fn void teleportEntity(ECS::Entity &entity, const ECS::Vector3<float> &positionVector)
             * @brief Teleport player
             * 
             * @param entity Entity to move
             * @param positionVector New position to teleport
             */
            void teleportEntity(ECS::Entity &entity, const ECS::Vector3<float> &positionVector);
    };
};

#endif /* !DISPLACER_HPP_ */
