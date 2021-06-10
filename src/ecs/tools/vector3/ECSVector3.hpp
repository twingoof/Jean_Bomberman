/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** ECSVector3
*/

#include <iostream>

#ifndef ECSVector3_HPP_
#define ECSVector3_HPP_

namespace ECS {
    template<typename T>
    class Vector3 {
        public:
            Vector3(T x = 0, T y = 0, T z = 0) : X(x), Y(y), Z(z) {};
            Vector3(const ECS::Vector3<T> &cpy) : X(cpy.X), Y(cpy.Y), Z(cpy.Z) {};
            ~Vector3() = default;

            Vector3 &operator+=(const ECS::Vector3<T> &rHand)
            {
                this->X += rHand.X;
                this->Y += rHand.Y;
                this->Z += rHand.Z;
                return (*this);
            }
            Vector3 &operator*(const T rHand)
            {
                this->X *= rHand;
                this->Y *= rHand;
                this->Z *= rHand;
                return (*this);

            }
            Vector3 &operator=(const ECS::Vector3<T> &rHand) {
                this->X = rHand.X;
                this->Y = rHand.Y;
                this->Z = rHand.Z;
                return (*this);
            }

            T X;
            T Y;
            T Z;
    };
}

#endif /* !ECSVector3_HPP_ */