/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Button
*/

/**
 * @file Button.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Button entity
 * @version 0.1
 * @date 2021-05-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef BUTTON_HPP_
#define BUTTON_HPP_

#include "IEntity.hpp"

/**
 * @class Button Button.hpp "src/ecs/entity/button/Button.hpp"
 */
class Button:public IEntity {
    public:
        /**
         * @fn Button()
         * @brief Construct a new Button object
         */
        Button();

        /**
         * @fn ~Button()
         * @brief Destroy the Button object
         */
        ~Button();

        /**
         * @fn void display() override
         * @brief Display the button
         */
        void display() override;
};

#endif /* !BUTTON_HPP_ */
