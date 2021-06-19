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

namespace raylib {
    class Vector3 : public ::Vector3 {
        public:
            Vector3();
            Vector3(float X, float Y, float Z);
            Vector3(const ::Vector3 &oldVector);
            Vector3 &operator=(const ::Vector3 &oldVector);
            ~Vector3() = default;

        protected:

        private:
            void setVector3(const ::Vector3 &oldVector);

    };
}

#endif /* !VECTOR3_HPP_ */
