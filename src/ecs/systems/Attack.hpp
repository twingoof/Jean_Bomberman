/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Attack
*/

/**
 * @file Attack.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Attack system
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ATTACK_HPP_
#define ATTACK_HPP_

#include "Clock.hpp"
#include "Attacker.hpp"
#include "Presets.hpp"
#include "Entity.hpp"
#include <vector>
#include "Controls.hpp"
#include "GetEntityInVector.hpp"
#include "Sound.hpp"

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class Attack Attack.hpp "src/ecs/system/Attack.hpp"
     */
    class Attack {
        public:
            /**
             * @fn Attack()
             * @brief Construct a new Attack object
             */
            Attack();

            /**
             * @fn ~Attack() = default
             * @brief Destroy the Attack object
             */
            ~Attack() = default;

            /**
             * @fn void manageBombs(std::vector<ECS::Entity> &entity)
             * @brief Function that handle bombs
             * 
             * @param entity List of entity on the game
             */
            void manageBombs(std::vector<ECS::Entity> &entity);

        private:
            /**
             * @fn void exploseBombs(std::vector<ECS::Entity> &entity)
             * @brief Made the bomb explode
             * 
             * @param entity All the entity of the game
             */
            void exploseBombs(std::vector<ECS::Entity> &entity);

            /**
             * @fn void manageErase(std::vector<ECS::Entity> &entities, ECS::Entity &bomb)
             * @brief Manage the erasing of the entities
             * 
             * @param entities Entity to erase
             * @param bomb Bomb that exploded
             */
            void manageErase(std::vector<ECS::Entity> &entities, ECS::Entity &bomb);

            /**
             * @fn void killPosKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb)
             * @brief Kill entities at right position
             * 
             * @param entities Entities with Killable
             * @param bomb Bomb that exploded
             */
            void killPosKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb);

            /**
             * @fn bool killTopKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt)
             * @brief Kill on the top of the bomb
             * 
             * @param entities Entities of the game
             * @param bomb Bomb that exploded
             * @param spaceBtwEnt Space between entities
             * @return true 
             * @return false 
             */
            bool killTopKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt);

            /**
             * @fn bool killBotKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt)
             * @brief Kill on the bottom of the bomb
             * 
             * @param entities Entities of the game
             * @param bomb Bomb that exploded
             * @param spaceBtwEnt Space between entities
             * @return true 
             * @return false 
             */
            bool killBotKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt);

            /**
             * @fn bool killLeftKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt)
             * @brief Kill on the left of the bomb
             * 
             * @param entities 
             * @param bomb Bomb that exploded
             * @param spaceBtwEnt 
             * @return true 
             * @return false 
             */
            bool killLeftKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt);

            /**
             * @fn bool killRightKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt)
             * @brief Kill on the right of the bomb
             * 
             * @param entities Entities of the game
             * @param bomb Bomb that exploded
             * @param spaceBtwEnt Space between entities
             * @return true 
             * @return false 
             */
            bool killRightKillable(std::vector<ECS::Entity> &entities, ECS::Entity &bomb, int spaceBtwEnt);


            /**
             * @fn ECS::Vector3<float> _findBombPos(ECS::Transform playerT)
             * @brief Find the bomb position
             * 
             * @param playerT Transform of the player
             * @return ECS::Vector3<float> 
             */
            ECS::Vector3<float> _findBombPos(ECS::Transform playerT);

            /**
             * @fn bool checkBombPos(ECS::Vector3<float> pos, std::vector<ECS::Entity> &entity)
             * @brief Check the bomb position
             * 
             * @param pos Position of bomb
             * @param entity Entities of the game
             * @return true 
             * @return false 
             */
            bool checkBombPos(ECS::Vector3<float> pos, std::vector<ECS::Entity> &entity);

            /**
             * @fn bool posIsColliding(ECS::Transform t1, ECS::Transform t2, int t2_x_multiplicator, int t2_y_multiplicator)
             * @brief Check if two entities are colliding
             * 
             * @param t1 First transform
             * @param t2 Second transform
             * @param t2_x_multiplicator X multiplicator for second
             * @param t2_y_multiplicator Y multiplicator for second
             * @return true 
             * @return false 
             */
            bool posIsColliding(ECS::Transform t1, ECS::Transform t2, int t2_x_multiplicator, int t2_y_multiplicator);

            unsigned int _bombId = 0;
            raylib::Sound bombExpl;

    };
};

#endif /* !ATTACK_HPP_ */
