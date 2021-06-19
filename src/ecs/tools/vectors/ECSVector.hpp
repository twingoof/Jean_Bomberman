/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** ECSVector
*/

#include <iostream>

#ifndef ECSVector_HPP_
#define ECSVector_HPP_

namespace ECS {
    template<typename T>
    class Vector3 {
        public:
            Vector3(T x = 0, T y = 0, T z = 0) : X(x), Y(y), Z(z) {};
            Vector3(const ECS::Vector3<T> &cpy) : X(cpy.X), Y(cpy.Y), Z(cpy.Z) {};
            ~Vector3() = default;

            ECS::Vector3<T> &operator+=(const ECS::Vector3<T> &rHand)
            {
                this->X += rHand.X;
                this->Y += rHand.Y;
                this->Z += rHand.Z;
                return (*this);
            }
            ECS::Vector3<T> &operator*(const T rHand)
            {
                this->X *= rHand;
                this->Y *= rHand;
                this->Z *= rHand;
                return (*this);

            }
            ECS::Vector3<T> &operator=(const ECS::Vector3<T> &rHand) {
                this->X = rHand.X;
                this->Y = rHand.Y;
                this->Z = rHand.Z;
                return (*this);
            }

            bool operator==(const ECS::Vector3<T> &rHand) {
                return (this->X == rHand.X && this->Y == rHand.Y && this->Z == rHand.Z);
            }

            T X;
            T Y;
            T Z;
    };

    template<typename T>
    class Vector4 {
        public:
            Vector4(T x = 0, T y = 0, T z = 0, T a = 0) : X(x), Y(y), Z(z), A(a) {};
            Vector4(const ECS::Vector4<T> &cpy) : X(cpy.X), Y(cpy.Y), Z(cpy.Z), A(cpy.A) {};
            ~Vector4() = default;

            Vector4 &operator+=(const ECS::Vector4<T> &rHand)
            {
                this->X += rHand.X;
                this->Y += rHand.Y;
                this->Z += rHand.Z;
                this->A += rHand.A;
                return (*this);
            }
            Vector4 &operator*(const T rHand)
            {
                this->X *= rHand;
                this->Y *= rHand;
                this->Z *= rHand;
                this->A *= rHand;
                return (*this);

            }
            Vector4 &operator=(const ECS::Vector4<T> &rHand) {
                this->X = rHand.X;
                this->Y = rHand.Y;
                this->Z = rHand.Z;
                this->A = rHand.A;
                return (*this);
            }

            bool operator==(const ECS::Vector4<T> &rHand) {
                return (this->X == rHand.X && this->Y == rHand.Y && this->Z == rHand.Z && this->A == rHand.A);
            }

            T X;
            T Y;
            T Z;
            T A;
    };
}

#endif /* !ECSVector_HPP_ */