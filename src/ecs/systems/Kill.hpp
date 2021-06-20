/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Kill
*/

/**
 * @file Kill.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Kill system
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef KILL_HPP_
#define KILL_HPP_

#include "Clock.hpp"
#include "Presets.hpp"
#include "Entity.hpp"
#include <vector>
#include <ctime>
#include "Controls.hpp"
#include "enum.hpp"
#include "Sound.hpp"
#include "GetEntityInVector.hpp"

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class Kill Kill.hpp "src/ecs/systems/Kill.hpp"
    */
    class Kill {
        public:
            /**
             * @fn Kill()
             * @brief Construct a new Kill object
             */
            Kill();

            /**
             * @fn ~Kill() = default
             * @brief Destroy the Kill object
             */
            ~Kill() = default;


            /**
             * @fn void deleteWall(std::vector<ECS::Entity> &entities)
             * @brief Delete wall when killed
             * 
             * @param entities Entity to delete
             */
            void deleteWall(std::vector<ECS::Entity> &entities);

        private:
            int _bonusId;
            raylib::Sound playerDead;
    };
};

#endif /* !KILL_HPP_ */
