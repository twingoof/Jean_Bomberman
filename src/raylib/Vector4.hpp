/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Vector4
*/

/**
 * @file Vector4.hpp
 * @author gildas.gonzalez@epitech.eu; pierrick.prost@epitech.eu; pierrick.prost@epitech.eu; valentin.bouchet@epitech.eu; mathis.ragot@epitech.eu
 * @brief File that contain the Vector4 class
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef VECTOR4_HPP_
#define VECTOR4_HPP_

#include "raylib.h"

namespace raylib {
    class Vector4 : public ::Vector4 {
        public:
            Vector4();
            Vector4(const ::Vector4 &oldVector);
            Vector4 &operator=(const ::Vector4 &oldVector);
            ~Vector4();

        protected:

        private:
            void setVector4(const ::Vector4 &oldVector);

    };
};

#endif /* !VECTOR4_HPP_ */
