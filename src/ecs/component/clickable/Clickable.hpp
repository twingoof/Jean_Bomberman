/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Clickable
*/

/**
 * @file Callback.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Callback component
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CLICKABLE_HPP_
#define CLICKABLE_HPP_

#include "IComponent.hpp"
/**
 * @class Callback Callback.hpp "src/ecs/component/clickable/Clickable.hpp"
 */
class Clickable : public IComponent {
    public:
        /**
         * @fn Callback(void(*callback)())
         * @brief Construct a new Callback object
         * 
         * @param callback Function to callback
         */
        Clickable(void(*callback)() = nullptr);

        /**
         * @fn ~Callback()
         * @brief Destroy the Callback object
         */
        ~Clickable();

        /**
         * @fn void callback()
         * @brief Use the callback
         */
        void callback();

        /**
         * @fn void setCallback(void(*callback)())
         * @brief Set the callback
         * 
         * @param callback Function to callback
         */
        void setCallback(void(*callback)());

        /**
         * @fn void (*getCallback())()
         * @brief Get the callback. For test purpose only.
         * 
         * @return void(*callback)()
         */
        void (*getCallback())();

    private:
        void (*_callback)(); /**< Callback*/
};

#endif /* !CLICKABLE_HPP_ */
