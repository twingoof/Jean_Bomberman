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
#include "Clickable.hpp"
#include "Texture.hpp"
#include "Vector.hpp"

/**
 * @class Button Button.hpp "src/ecs/entity/button/Button.hpp"
 */
class Button:public IEntity {
    public:
        /**
         * @fn Button()
         * @brief Construct a new Button object
         */
        Button(std::map<std::string, std::string> textures = {}, void(*callback)() = nullptr, std::vector<int, int> size = {}, std::vector<int, int> position = {});

        /**
         * @fn ~Button()
         * @brief Destroy the Button object
         */
        ~Button();

        Texture _textures; /**< Texture of the Button*/
        Clickable _callback; /**< Callback of the Button*/
        Vector _size; /**< Size of the Button*/
        Vector _position; /**< Position of the Button*/
    private:
};

#endif /* !BUTTON_HPP_ */
