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
    class Vector3 {
        public:
            Vector3(int x = 0, int y = 0, int z = 0);
            Vector3(const Vector3 &cpy);
            Vector3 &operator+=(const Vector3 &offset);
            Vector3 &operator*(const int i);
            ~Vector3();

            void setX(int x);
            void setY(int y);
            void setZ(int z);

            int getX() const;
            int getY() const;
            int getZ() const;

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