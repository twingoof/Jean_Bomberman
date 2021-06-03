/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Moveable
*/

#ifndef MOVEABLE_HPP_
#define MOVEABLE_HPP_

#include "ECSVector3.hpp"

class Moveable {
    public:
        Moveable() = default;
        Moveable(int posX, int posY, int posZ);
        Moveable(ECSVector3 position);
        Moveable(const Moveable &Moveable) = default;
        Moveable &operator=(const Moveable &Moveable) = default;
        ~Moveable();

        void moveX(int offsetX);
        void moveY(int offsetY);
        void moveZ(int offsetZ);
        void move(int offsetX, int offsetY, int offsetZ);
        void move(ECSVector3 offsetPosition);
        const ECSVector3 getPosition() const;

    private:
        ECSVector3 _position;
};

#endif /* !MOVEABLE_HPP_ */