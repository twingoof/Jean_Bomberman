/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Controller
*/

/**
 * @file Controller.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Controller system
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CONTROLLER_HPP_
#define CONTROLLER_HPP_

#include "Displacer.hpp"
#include "Controls.hpp"
#include "Moveable.hpp"
#include "Window.hpp"
#include "Entity.hpp"
#include "Sound.hpp"

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class Controller Controller.hpp "src/ecs/systems/Controller.hpp"
    */
    class Controller {
        public:
            /**
             * @fn Controller()
             * @brief Construct a new Controller object
             */
            Controller();

            /**
             * @fn Controller(const Controller &oldController) = default
             * @brief Construct a new Controller object
             * 
             * @param oldController Old controller to copy
             */
            Controller(const Controller &oldController) = default;

            /**
             * @fn Controller &operator=(const Controller &oldController) = default
             * @brief Copy constructor
             * 
             * @param oldController Old controller to copy
             * @return Controller& 
             */
            Controller &operator=(const Controller &oldController) = default;

            /**
             * @fn ~Controller() = default
             * @brief Destroy the Controller object
             */
            ~Controller() = default;


            /**
             * @fn void moveEntity(std::vector<ECS::Entity> &entity)
             * @brief Move entity
             * 
             * @param entity Entity
             */
            void moveEntity(std::vector<ECS::Entity> &entity);

            /**
             * @fn bool canMoveTop(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed)
             * @brief Check if the entity can move top
             * 
             * @param entity Entity in the game
             * @param player Player to move
             * @param speed Speed of movement
             * @return true 
             * @return false 
             */
            bool canMoveTop(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed);

            /**
             * @fn bool canMoveDown(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed)
             * @brief Check if the entity can move down
             * 
             * @param entity Entity in the game
             * @param player Player to move
             * @param speed Speed of movement
             * @return true 
             * @return false 
             */
            bool canMoveDown(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed);

            /**
             * @fn bool canMoveRight(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed)
             * @brief Check if the entity can move right
             * 
             * @param entity Entity in the game
             * @param player Player to move
             * @param speed Speed of movement
             * @return true 
             * @return false 
             */
            bool canMoveRight(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed);

            /**
             * @fn bool canMoveLeft(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed)
             * @brief Check if the entity can move left
             * 
             * @param entity Entity in the game
             * @param player Player to move
             * @param speed Speed of movement
             * @return true 
             * @return false 
             */
            bool canMoveLeft(std::vector<ECS::Entity> &entity, ECS::Entity &player, float speed);

        private:
            raylib::Sound collectBonus;
    };
};

#endif /* !CONTROLLER_HPP_ */