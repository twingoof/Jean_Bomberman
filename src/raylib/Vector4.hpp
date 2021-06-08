/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Vector4
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
