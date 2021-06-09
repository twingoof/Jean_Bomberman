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
            Vector3(T x = 0, T y = 0, T z = 0);
            Vector3(const Vector3 &cpy);
            ~Vector3();

            Vector3 &operator+=(const Vector3 &offset);
            Vector3 &operator*(const T i);
            Vector3 &operator=(const Vector3 &rHand) {
                this->_x = rHand.getX();
                this->_y = rHand.getY();
                this->_z = rHand.getZ();
                return (*this);
            }

            int _x;
            int _y;
            int _z;
    };
};

#endif /* !ECSVector3_HPP_ */