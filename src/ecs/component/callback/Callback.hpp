/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Callback
*/

/**
 * @file Callback.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Callback component
 * @version 0.1
 * @date 2021-05-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CALLBACK_HPP_
#define CALLBACK_HPP_

/**
 * @class Callback Callback.hpp "src/ecs/component/clickable/Callback.hpp"
 */
class Callback {
    public:
        /**
         * @fn Callback(void(*callback)())
         * @brief Construct a new Callback object
         * 
         * @param callback Function to callback
         */
        Callback(void(*callback)() = nullptr);

        /**
         * @fn ~Callback()
         * @brief Destroy the Callback object
         */
        ~Callback();

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

#endif /* !CALLBACK_HPP_ */