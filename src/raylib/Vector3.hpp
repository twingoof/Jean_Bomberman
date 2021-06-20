/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Vector3
*/

/**
 * @file Vector3.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Vector3 class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef VECTOR3_HPP_
#define VECTOR3_HPP_

#include "raylib.h"

/**
 * @namespace raylib
 */
namespace raylib {
    /**
     * @class Vector3 Vector3.hpp "src/raylib/Vector3.hpp"
     */
    class Vector3 : public ::Vector3 {
        public:
            /**
             * @fn Vector3()
             * @brief Construct a new Vector3
             */
            Vector3();

            /**
             * @fn Vector3(float X, float Y, float Z)
             * @brief Construct a new Vector3 object
             * 
             * @param X X
             * @param Y Y
             * @param Z Z
             */
            Vector3(float X, float Y, float Z);
            
            /**
             * @fn Vector3(const ::Vector3 &oldVector)
             * @brief Construct a new Vector3
             * 
             * @param oldVector Vector to copy
             */
            Vector3(const ::Vector3 &oldVector);

            /**
             * @fn Vector3 &operator=(const ::Vector3 &oldVector)
             * @brief Copy constructor
             * 
             * @param oldVector Vector to copy
             * @return Vector3& 
             */
            Vector3 &operator=(const ::Vector3 &oldVector);

            /**
             * @fn ~Vector3() = default
             * @brief Destroy the Vector3 object
             */
            ~Vector3() = default;

        protected:

        private:
            /**
             * @fn void setVector3(const ::Vector3 &oldVector)
             * @brief Set the Vector
             * 
             * @param oldVector Vector value
             */
            void setVector3(const ::Vector3 &oldVector);

    };
}

#endif /* !VECTOR3_HPP_ */
