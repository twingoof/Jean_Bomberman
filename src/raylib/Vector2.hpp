/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** Vector2
*/

/**
 * @file Vector2.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Vector2 class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef VECTOR2_HPP_
#define VECTOR2_HPP_

#include "raylib.h"

/**
 * @namespace raylib
 */
namespace raylib {
    /**
     * @class Vector2 Vector2.hpp "src/raylib/Vector2.hpp"
     */
    class Vector2 : public ::Vector2 {
        public:
            /**
             * @fn Vector2()
             * @brief Construct a new Vector2
             */
            Vector2();

            /**
             * @fn Vector2(const ::Vector2 &oldVector)
             * @brief Construct a new Vector2
             * 
             * @param oldVector Vector to copy
             */
            Vector2(const ::Vector2 &oldVector);

            /**
             * @fn Vector2 &operator=(const ::Vector2 &oldVector)
             * @brief Copy constructor
             * 
             * @param oldVector Vector to copy
             * @return Vector2& 
             */
            Vector2 &operator=(const ::Vector2 &oldVector);

            /**
             * @fn ~Vector2() = default
             * @brief Destroy the Vector2 object
             */
            ~Vector2() = default;

        private:
            /**
             * @fn void setVector(const ::Vector2 &oldVector)
             * @brief Set the Vector
             * 
             * @param oldVector Vector value
             */
            void setVector(const ::Vector2 &oldVector);
    };
}

#endif /* !VECTOR2_HPP_ */
