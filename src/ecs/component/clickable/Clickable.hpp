/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Clickable
*/

/**
 * @file Clickable.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Clickable component
 * @version 0.1
 * @date 2021-05-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CLICKABLE_HPP_
#define CLICKABLE_HPP_

/**
 * @class Clickable Clickable.hpp "src/ecs/component/clickable/Clickable.hpp"
 */
class Clickable {
    public:
        /**
         * @fn Clickable(void(*callback)())
         * @brief Construct a new Clickable object, with a callback
         * 
         * @param callback Function to callback
         */
        Clickable(void(*callback)());

        /**
         * @fn Clickable()
         * @brief Construct a new Clickable object, without a callback
         */
        Clickable();

        /**
         * @fn ~Clickable()
         * @brief Destroy the Clickable object
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
        void(*_callback)(); /**< Callback*/
};

#endif /* !CLICKABLE_HPP_ */