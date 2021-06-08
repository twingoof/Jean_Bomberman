/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** Vector2
*/

#ifndef VECTOR2_HPP_
#define VECTOR2_HPP_

#include "raylib.h"

namespace raylib {
    class Vector2 : public ::Vector2 {
        public:
            Vector2();
            Vector2(const ::Vector2 &oldVector);
            Vector2 &operator=(const ::Vector2 &oldVector);
            ~Vector2() = default;

        protected:
        private:
            void setVector(const ::Vector2 &oldVector);
    };
}

#endif /* !VECTOR2_HPP_ */
