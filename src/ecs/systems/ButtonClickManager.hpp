/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** ButtonClickManager
*/

/**
 * @file ButtonClickManager.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the ButtonClickManager system
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef BUTTONCLICKMANAGER_HPP_
#define BUTTONCLICKMANAGER_HPP_

#include "Entity.hpp"
#include "Controls.hpp"
#include "Transform.hpp"
#include "Clickable.hpp"
#include "Collision.hpp"
#include "Drawable2D.hpp"
#include "MenuGenerator.hpp"
#include <vector>

/**
 * @namespace ECS
 */
namespace ECS {
    /**
     * @class ButtonClickManager ButtonClickManager.hpp "src/ecs/system/ButtonClickManager.hpp"
     */
    class ButtonClickManager {
        public:
            /**
             * @fn ButtonClickManager() = default
             * @brief Construct a new Button Click Manager object
             */
            ButtonClickManager() = default;

            /**
             * @fn ~ButtonClickManager() = default
             * @brief Destroy the Button Click Manager object
             */
            ~ButtonClickManager() = default;

            
            /**
             * @fn void checkButtonArea(std::vector<ECS::Entity> &entities)
             * @brief Check the area of the button
             * 
             * @param entities Entitites to check
             */
            void checkButtonArea(std::vector<ECS::Entity> &entities);

            /**
             * @fn bool buttonIsOverflow(ECS::Entity &entity)
             * @brief Check if the button is overflowed
             * 
             * @param entity Entity to check
             * @return true 
             * @return false 
             */
            bool buttonIsOverflow(ECS::Entity &entity);

            /**
             * @fn bool buttonIsPressed(ECS::Entity &entity)
             * @brief Check if the button is pressed
             * 
             * @param entity Entity to check
             * @return true 
             * @return false 
             */
            bool buttonIsPressed(ECS::Entity &entity);

        protected:
        private:
            /**
             * @fn std::string getColoredSpritePath(std::string spritePath)
             * @brief Get the Colored Sprite Path object
             * 
             * @param spritePath Sprite path
             * @return std::string 
             */
            std::string getColoredSpritePath(std::string spritePath);

            /**
             * @fn std::string getUncoloredSpritePath(std::string spritePath)
             * @brief Get the Uncolored Sprite Path object
             * 
             * @param spritePath Sprite Path
             * @return std::string 
             */
            std::string getUncoloredSpritePath(std::string spritePath);
    };
};

#endif /* !BUTTONCLICKMANAGER_HPP_ */
